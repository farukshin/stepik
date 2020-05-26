#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0,maxInd;
    cin >> n;

    for(int i=0; i<n; i++)
        {
        cin >> m[i];
        if(i==0)
            maxInd = i;
        else if(m[i] > m[maxInd])
            maxInd = i;
        }

    k = m[n-1];
    m[n-1] = m[maxInd];
    m[maxInd] = k;

    for(int i=0; i<n; i++)
        cout << m[i] << " ";

    return 0;
 }
