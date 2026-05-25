# sbox

Standard solutions rely on `length + "#" + string`. That is trivial to reverse.
**sbox** utilizes a `constexpr` AES-128 block cipher to mutate strings into high-entropy noise.


<img width="498" height="280" alt="76062ae47eef25d671b25c9624b275bd" src="https://github.com/user-attachments/assets/e8401e57-3927-4ccf-acde-7884be263dab" />


### The Story
during the Neetcode "Encode and Decode Strings" challenge, I ported the AES engine from my obfuscation project, **[Obfusk8](https://github.com/x86byte/Obfusk8)**. 

The implementation passed in **7ms** on the first submission. Cryptographic security shouldn't be a trade-off for performance.

### Features
- **No Delimiters:** fixed-width headers and block mutation replace predictable separators.
- **Binary Safe:** effortlessly handles raw payloads and null bytes.
- **Static Stealth:** plaintext is eliminated at compile-time; nothing for static analysis to find.

### Performance
**7ms runtime.** 
Proving that overkill can still be optimal.
