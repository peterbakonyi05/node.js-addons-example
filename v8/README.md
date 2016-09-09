# [Node.js addons examples - Using V8 directly](https://nodejs.org/api/addons.html)

## Install, build, run
* `npm i -g node-gyp` (install node-gyp globally)
* `node-gyp configure build` (compile C++ addons)
* `npm i` (install local packages)
* `node src/example-name.js` (try out one of the examples)

## Examples
* Hello World (hello)
* Function Arguments (function-arguments)
* Callback (callback)
* Object factory (object-factory)
* Function factory
* Wrapping C++ objects
* Factory of wrapped objects
* Passing wrapped objects around
* AtExit hooks
