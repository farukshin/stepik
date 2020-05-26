#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(char c:s)
        cout << c-int('a')+1;

    return 0;
 }
