# Node.js C++ addons examples and experiments

## Examples:
* [Creating addons using V8 directly](./v8)
* [Crating addons using nan](./nan)

## TODO:
* finish V8 addons examples
* perf test of hidden classes
* perf test of executing the same function multiple times
* perf test of native C++ vs optimized JS code
* build V8
* try to use native addons with Webpack :)

## V8 Resources:
* [V8 Wiki](https://github.com/v8/v8/wiki)
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
* Initialize using array literals for small fixed-sized arrays
* Prefer monomorphic over polymorphic wherever possible
* Optimizing compiler "bails out" on functions with try {} catch {} blocks
* Avoid hidden class changes in functions after they are optimized
* Optimize your algorithm