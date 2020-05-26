#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ans=true;
    for(int i=0; i<=s.size() - 1; i++)
        if(s[i] !='a' && s[i] !='b')
            {
            ans = false;
            break;
            }
    cout << (ans ? "YES":"NO") << endl;
    return 0;
 }
