import {Template} from 'meteor/templating';
import {ReactiveVar} from 'meteor/reactive-var';
import _ from 'lodash'

import './main.html';

Template.JS.onCreated(function () {
  Session.set('scriptOutput', '')
});

Template.JS.onRendered(function () {
  // make textarea automatically resizable
  $('textarea').each(function () {
    this.setAttribute('style', 'height:' + (this.scrollHeight) + 'px;overflow-y:hidden;');
  }).on('input', function () {
    this.style.height = 'auto';
    this.style.height = (this.scrollHeight) + 'px';
  });

  // CodeMirror
  let marker;
  let editor = CodeMirror.fromTextArea(this.find("#editor"), {
    tabSize: 2,
    mode: "none",
    lineNumbers: true,
    firstLineNumber: 1
  });

  // editor change listener
  editor.on('keyup', function (instance, event) {
    const esc = event.which == 27;
    // const enter = event.which == 13;
    const et = event.target;
    const text = et.value;
    const input = et.nodeName != 'INPUT' && et.nodeName != 'TEXTAREA';

    console.log('=>', editor.getValue());

    Meteor.call('run', editor.getValue(), function (error, result) {
      Session.set('scriptOutput', result);

      // if defined then clear css classes from editor
      if (marker) marker.clear();

      if (!_.isUndefined(result)) {
        let parsedDoc = result.split('\n');
        console.log('<=', result);
        console.log('\n');

        _.forEach(parsedDoc, function (value) {

          // if line start whit - parse differently
          if (!_.startsWith(value, '-')) {
            let parsedLine = value.split(',');
            let className = parsedLine[0];
            let line = _.toNumber(parsedLine[1]);
            let length = _.toNumber(parsedLine[2]);
            let chF = _.toNumber(parsedLine[3]);
            let chI = chF - length;

            // check that className is defined and that lines and chars are valid numbers
            if (!_.isEmpty(className) && _.isNumber(line) && _.isNumber(chI) && _.isNumber(chF)) {
              // console.log(className, line, length, chF);

              marker = editor.markText({line: line, ch: chI}, {line: line, ch: chF}, {
                className: className
              });
            }
          } else {

          }
        });
      }
    });

    if (input) {
      if (esc) {
        // restore state
        document.execCommand('undo');
        // lose focus
        et.blur();
      }
      // else if (enter) {
      //   // save
      //   data[et.getAttribute('data-name')] = text;
      //
      //   log(JSON.stringify(data));
      //
      //   et.blur();
      //   event.preventDefault();
      // }
    }
  })
});

Template.JS.helpers({
  output() {
    return Session.get('scriptOutput')
  }
});

Template.JS.events({});

function log(text) {
  console.log(text)
}

