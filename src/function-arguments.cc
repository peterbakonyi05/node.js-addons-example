#include <node.h>

namespace demo {
	using v8::Exception;
	using v8::FunctionCallbackInfo;
	using v8::Isolate;
	using v8::Local;
	using v8::Number;
	using v8::Object;
	using v8::String;
	using v8::Value;

	void Add(const FunctionCallbackInfo<Value>& args) {
		Isolate* isolate = args.GetIsolate();

		// Check the number of arguments passed
		if(args.Length() < 2) {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Wrong number of arguments")
			));
			return;
		}

		if(!args[0]->IsNumber() || !args[1]->IsNumber()) {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Wrong arguments")
			));
			return;
		}

		// Perform the operation
		double value = args[0]->NumberValue() + args[1]->NumberValue();
		Local<Number> num = Number::New(isolate, value);

		// Set the return value (using the passed in FunctionCallbackInfo<Value>&)
		args.GetReturnValue().Set(num);

	}

	void Init(Local<Object> exports) {
		NODE_SET_METHOD(exports, "add", Add);
	}

	NODE_MODULE(functionArguments, Init)

}