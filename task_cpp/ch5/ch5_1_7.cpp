#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(int i = 0; i<=9; i++)
        if(s[i] == 'a' || s[i]=='b')
            k++;

    cout << k << " " << s.size()-k << endl;
    return 0;
 }
