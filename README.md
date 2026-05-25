# sbox

Standard solutions rely on `length + "#" + string`. That is trivial to reverse. 
**sbox** utilizes a `constexpr` AES-128 block cipher to mutate strings into high-entropy noise.

### The Story
During the Neetcode "Encode and Decode Strings" challenge, I ported the AES engine from my obfuscation project **[Obfusk8](https://github.com/x86byte/Obfusk8)**. 

The implementation passed in **7ms** on the first submission. Cryptographic security shouldn't be a trade-off for performance.

### Features
- **No Delimiters:** Fixed-width headers and block mutation replace predictable separators.
- **Binary Safe:** Effortlessly handles raw payloads and null bytes.
- **Static Stealth:** Plaintext is eliminated at compile-time; nothing for static analysis to find.


<img width="388" height="173" alt="performance proof" src="https://github.com/user-attachments/assets/c3d77c38-7205-4576-ac87-e134a5853812" />


### Performance
**7ms runtime.** 
Proving that overkill can still be optimal.
