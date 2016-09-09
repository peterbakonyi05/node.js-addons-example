const bindings = require('bindings');
const addon = bindings('object-factory');

const obj1 = addon('hello');
const obj2 = addon('world');

console.log(obj1.msg, obj2.msg);