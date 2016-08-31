#include <node.h>

namespace demo {

  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Object;
  using v8::String;
  using v8::Value;

  void Method(const FunctionCallbackInfo<Value>& args) {
    // Isolates can run in parallel since they are different instances of V8 entirely
    // Think of an Isolate as a sandbox - a V8 runtime environment
    // within an instance of V8 called an Isolate, you can define multiple Contexts so that unrelated applications
    // can do what they need to do without interfering with each other
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
  }

  void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "hello", Method);
  }

  NODE_MODULE(addon, init)

}  // namespace demo