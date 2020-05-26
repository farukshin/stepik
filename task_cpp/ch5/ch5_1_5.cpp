#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(int i = 1; i<=9; i++)
        if(s[i]=='b' && s[i-1]=='a')
            k++;

    cout << k << endl;
    return 0;
 }
