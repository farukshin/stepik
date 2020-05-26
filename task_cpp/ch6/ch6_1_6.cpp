#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0,max;
    cin >> n;

    for(int i=0; i<n; i++)
        {
        cin >> m[i];
        if(i==0)
            max = m[i];
        else if(m[i] > max)
            max = m[i];
        }

    for(int i=0; i<n; i++)
        if(m[i] == max)
            cout << i+1 << " ";

    return 0;
 }
