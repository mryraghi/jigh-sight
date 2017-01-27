import {Template} from "meteor/templating";
import _ from "lodash";
import "./main.html";

Template.JS.onCreated(function () {
  Session.set('scriptOutput', '');
  Session.set('variables', []);
  Session.set('console', []);
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
      // empty result
      Session.set('scriptOutput', '');
      // reset variables
      Session.set('console', []);
      // reset variables
      Session.set('variables', []);

      // if defined then clear css classes from editor
      if (marker) marker.clear();

      if (!_.isUndefined(result)) {
        let parsedDoc = result.split('\n');
        console.log('<=', result, '\n');

        _.forEach(parsedDoc, function (value) {

          // if line start whit - parse differently
          if (_.startsWith(value, '-')) {
            let newResult = Session.get('scriptOutput');
            newResult += value + '\n';
            Session.set('scriptOutput', newResult);
          } else if (_.startsWith(value, '@')) {

            // get all variables which are divided by a semicolon
            let parsedVars = value.split(';');

            _.forEach(parsedVars, function (parsedVar) {
              // if not empty
              if (!_.isEmpty(parsedVar)) {
                // remove arrow
                let newValue = _.trim(parsedVar, '@');

                // split name : value
                let newParsedVar = newValue.split(':');

                // get previously stored values
                let newVariables = Session.get('variables');

                // init new variable
                let variable = {};
                variable.name = newParsedVar[0];
                variable.value = newParsedVar[1];

                // store new variable
                newVariables.push(variable);

                // set session variable
                Session.set('variables', newVariables);
              }
            });
          } else if (_.startsWith(value, '$')) {

            // get all variables which are divided by a semicolon
            let parsedOutputs = value.split(';');

            _.forEach(parsedOutputs, function (parsedOutput) {
              // if not empty
              if (!_.isEmpty(parsedOutput)) {
                // remove arrow
                let newValue = _.trim(parsedOutput, '$');

                // split name : value
                let newParsedConsole = newValue.split(':');

                // get previously stored values
                let newConsole = Session.get('console');

                // init new variable
                let showConsole = {};
                showConsole.name = newParsedConsole[0];
                showConsole.value = newParsedConsole[1];

                // store new variable
                newConsole.push(showConsole);

                // set session variable
                Session.set('console', newConsole);
              }
            });
          } else {
            let parsedLine = value.split(',');
            let className = parsedLine[0];
            let line = _.toNumber(parsedLine[1]);
            let length = _.toNumber(parsedLine[2]);
            let chF = _.toNumber(parsedLine[3]);
            let chI = chF - length;

            // check that className is defined and that lines and chars are valid numbers
            if (!_.isEmpty(className) && _.isNumber(line) && _.isNumber(chI) && _.isNumber(chF)) {
              marker = editor.markText({line: line, ch: chI}, {line: line, ch: chF}, {
                className: className
              });
            }
          }
        });
      }
    });
  })
});

Template.JS.helpers({
  output() {
    return Session.get('scriptOutput')
  },
  variables() {
    return Session.get('variables')
  },
  console() {
    return Session.get('console')
  }
});

Template.JS.events({});

function log(text) {
  console.log(text)
}

