# [Node.js addons examples - Using V8 directly](https://nodejs.org/api/addons.html)

Node.js Addons are dynamically-linked shared objects, written in C or C++, that can be loaded into Node.js 
using the require() function, and used just as if they were an ordinary Node.js module. They are used primarily 
to provide an interface between JavaScript running in Node.js and C/C++ libraries.

## Install, build, run
* `npm i` (install local packages)
* `npm i -g node-gyp` (install node-gyp globally)
* `node-gyp configure build` (compile C++ addons)
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
