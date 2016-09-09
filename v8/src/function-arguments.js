const bindings = require('bindings');
const addon = bindings('function-arguments');

console.log('This should be eight:', addon.add(3, 5));