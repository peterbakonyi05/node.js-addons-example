const bindings = require('bindings');
const addon = bindings('callback');

addon((msg) => {
	console.log(msg);
});