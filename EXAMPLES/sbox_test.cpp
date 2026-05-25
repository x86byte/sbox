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
    s.push_back(_OBF("ama obfuscation addicted"));
    s.push_back(_OBF("x86byte logic is invisible"));
    s.push_back(_OBF("static analysis is for losers?"));
    auto res = enc(s, sx);
    cout << "	[+] Encrypted strings :\n	    - " << res << endl;
    auto recovered = dec(res, sx);
    cout <<  "	[+] Decrypted strings :\n";
    for(auto& str : recovered)
    	cout << "	    - " << str << endl;
    return 0;
}
