'use strict';

const bindings = require('bindings');
const addon = bindings('myaddon');

const value = process.argv[2] || 'default';

// use printf in C++
addon.print(value);

// pass a paremeter and return the length from C++
console.log(addon.length(value));

// create a non-blocking setTimeout in C++
const timerId = setInterval(() => {
	process.stdout.write('.')
}, 100);

addon.delay(3000, () => {
	process.stdout.write("done");
	clearTimeout(timerId);
});

process.stdout.write('Waiting')