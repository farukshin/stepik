#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(int i = 1; i<=9; i++)
        if(s[i] <= s[i-1])
            k++;

    cout << (k>0?"NO":"YES") << endl;
    return 0;
 }
