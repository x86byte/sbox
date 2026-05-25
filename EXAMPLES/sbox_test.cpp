#include "../sbox.hpp"

string enc(vector<string> &s, sbox sx)
{
   	cout << "[#] Encrypting....\n";
    return (sx.encode(s));
}

vector<string> dec(string s, sbox sx)
{
   	cout << "[#] Decrypting....\n";
    return (sx.decode(s));
}

int main()
{
  	sbox sx;
  	vector<string> s;
  	s.push_back("ama obfuscation addicted");
    auto res = enc(s, sx);
  	cout << "	[+] Encrypted strings :\n	    - " << res << endl;
  	auto vs = dec(res, sx);
  	cout << "	[+] Decrypted strings : " << endl;
  	for(auto ss : vs)
  		cout << "	    - " << ss << endl;
  	return 0;
}
