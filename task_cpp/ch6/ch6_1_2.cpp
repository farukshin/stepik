#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> m[i];

    for(int i=0; i<n; i++)
        if(m[n-1] == m[i])
            k++;


     cout << k << endl;

    return 0;
 }
