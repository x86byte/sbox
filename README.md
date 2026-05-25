# sbox

Standard solutions rely on `length + "#" + string`. That is trivial to reverse. 
**sbox** utilizes a `constexpr` AES-128 block cipher to mutate strings into high-entropy noise.

### The Story
During the Neetcode "Encode and Decode Strings" challenge, I ported the AES engine from my obfuscation project, **[Obfusk8](https://github.com/x86byte/Obfusk8)**. 

The implementation passed in **7ms** on the first submission. Cryptographic security shouldn't be a trade-off for performance.

### Features
- **No Delimiters:** Fixed-width headers and block mutation replace predictable separators.
- **Binary Safe:** Effortlessly handles raw payloads and null bytes.
- **Static Stealth:** Plaintext is eliminated at compile-time. Using the provided macros, `strings.exe` (or `strings` in linux) returns zero results.

### How to Use
Check the [EXAMPLES](https://github.com/x86byte/sbox/tree/main/EXAMPLES) folder for implementation details:

1. **Multi-String Example (`sbox_test.cpp`):**
   Demonstrates how to handle a `vector<string>` using the `_OBF(str)` macro for batch processing. Useful for transit-ready obfuscation.
   
2. **Single String Example (`sbox_test1.cpp`):**
   Demonstrates atomic materialization using the `ObfStr(str)` macro. Best for single variable assignments:
   ```cpp
   string s = ObfStr("ama obfuscation addicted");
   ```

### Performance
**7ms runtime.** 
Proving that overkill can still be optimal.

---
**Author:** [x86byte](https://github.com/x86byte)
