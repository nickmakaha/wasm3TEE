#define WASM_EXPORT __attribute__((used)) __attribute__((visibility ("default")))
WASM_EXPORT
void setup() {
  println("C++ is running!");
}