#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(char c: s)
        cout << int(c)-96 << " ";

    return 0;
 }
