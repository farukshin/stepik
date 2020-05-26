#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ans=false;
    for(int i=1; i<=s.size() - 1; i++)
        if(s[i] != s[i-1])
            {
            cout << s[i-1] << s[i] << endl;
            ans = true;
            }

    cout << (!ans ? "NO":"");
    return 0;
 }
