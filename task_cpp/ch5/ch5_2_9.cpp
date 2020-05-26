#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool fl=false;
    for(int i=2; i<=s.size() - 1; i++)
        if(s[i] == 'c' && s[i-1]=='b' && s[i-2]=='a')
            {
            cout << i-1 << " ";
            fl = true;
            }

    cout << (!fl ? "NO":"");
    return 0;
 }
