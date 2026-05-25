#include "../sbox.hpp"

int main()
{
  	sbox sx;
  	vector<string> s;
  	s.push_back("ama obfuscation addicted");
  	auto res = sx.encode(s);
  	cout << "	[+] Encrypted strings :\n	    - " << res << endl;
  	auto vs = sx.decode(res);
  	cout << "	[+] Decrypted strings : " << endl;
  	for(auto ss : vs)
  		cout << "	    - " << ss << endl;
  	return 0;
}
