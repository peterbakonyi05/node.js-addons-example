const requireAddon = require('./require-addon');
const addon = requireAddon('callback');

addon((msg) => {
	console.log(msg);
});