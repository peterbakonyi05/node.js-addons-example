const requireAddon = require('./require-addon');
const addon = requireAddon('object-factory');

const obj1 = addon('hello');
const obj2 = addon('world');

console.log(obj1.msg, obj2.msg);