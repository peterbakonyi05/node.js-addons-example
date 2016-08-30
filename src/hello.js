const requireAddon = require('./require-addon');
const hello = requireAddon('hello');

console.log(hello.hello());