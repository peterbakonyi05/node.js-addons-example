const requireAddon = require('./require-addon');
const addon = requireAddon('function-arguments');

console.log('This should be eight:', addon.add(3, 5));