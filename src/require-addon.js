const path = require('path');

function requireAddon(buildType, addonName) {
	return require(path.join(__dirname, `../build/${buildType}/${addonName}.node`));
}

module.exports = function (addonName) {
	try {
		return requireAddon("Release", addonName);
	} catch (err) {
		return requireAddon("Debug", addonName);
	}
};
