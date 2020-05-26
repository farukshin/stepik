#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(char c: s)
        if(c=='a')
            k++;

    cout << k << " " << s.size()-k << endl;
    return 0;
 }
