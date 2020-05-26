#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> m[i];

    for(int i=n-1; i>=0; i--)
        cout << m[i] << " ";

    return 0;
 }
