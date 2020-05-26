#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ans=true;
    if(s.size()>=2)
    for(int i=0; i<=s.size()/2 - 1; i++)
        if(s[i] != s[s.size()-i-1])
            {
            ans = false;
            break;
            }
    cout << (ans ? "YES":"NO") << endl;
    return 0;
 }
