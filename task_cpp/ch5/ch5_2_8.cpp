#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(int i=0; i<=s.size() - 1; i++)
        if(s[i] == 'a')
            cout << 'b';
        else
            cout << 'a';

    return 0;
 }
