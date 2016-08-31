# Node.js C++ addons examples and experiments

## Examples:
* Hello World (hello)
* Function Arguments (function-arguments)
* Callback (callback)
* Object factory (object-factory)
* Function factory
* Wrapping C++ objects
* Factory of wrapped objects
* Passing wrapped objects around
* AtExit hooks

## TODO:
* perf test of hidden classes
* perf test of executing the same function multiple times
* try to use native addons with Webpack :)

## V8 Resources:
* [V8 Wiki](https://github.com/v8/v8/wiki)
* [Writing Node.js addons](https://nodejs.org/api/addons.html)
* [Basics](https://developers.google.com/v8/)
* [Intro video](https://www.youtube.com/watch?v=UJPdhx5zTaw)
* [V8 Blog](http://v8project.blogspot.com/)

## How to optimize performance in JS:
* Always initialize object members in the same order
* Prefer numeric values that can be represented as 31-bit signed integers
* Use contiguous keys starting at 0 for Arrays
* Don't pre-allocate large Arrays (e.g. > 64K elements) to their maximum size, instead grow as you go
* Don't delete elements in arrays, especially numeric arrays
* Don't load uninitialized or deleted elements