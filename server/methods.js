const spawn = Npm.require('child_process').spawn;
const path = Npm.require('path');

const cwd = process.env.PWD + '/public/compiler/';
let exec, output;

// TODO: doc.markText(from: {line, ch}, to: {line, ch}, ?options: object) → TextMarker

Meteor.methods({
  'startScript': function () {

  },

  'run': function (input) {
    return run(input).then(function (result) {
      return result
    }).catch(function (error) {
      throw new Meteor.Error('jigh-sight', error)
    })
  },

  'killProcess': function () {
    // exec.stdin.end();
  }
});

function run(input) {
  return new Promise(function (resolve, reject) {
    exec = spawn('jigh-sight', {cwd: cwd});

    exec.stdout.on('data', (data) => {
      resolve(data.toString())
    });

    exec.stderr.on('data', (data) => {
      resolve(data.toString())
    });

    exec.on('exit', (code) => {
      resolve(`Child exited with code ${code}`)
    });

    exec.stdin.write(input);
    exec.stdin.end();
  })
}

function log(text) {
  console.log(text)
}