#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0,max;
    cin >> n;
    bool fl=true;

    for(int i=0; i<n; i++)
        cin >> m[i];


    for(int i=0; i<= n/2 - 1; i++)
        cout << m[i] + m[n-i-1] << " ";

    return 0;
 }
