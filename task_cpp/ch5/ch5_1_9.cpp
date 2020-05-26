#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0, d=0;
    for(char c: s)
        if(c >='0'  && c <= '9')
            d++;
        else
            k++;

    cout << (k==0? "DIGITS": (d==0?"LETTERS":"ANOTHER")) << endl;
    return 0;
 }
