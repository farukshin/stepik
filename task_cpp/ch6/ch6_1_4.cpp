#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0,minInd;
    cin >> n;

    for(int i=0; i<n; i++)
        {
        cin >> m[i];
        if(i==0)
            minInd = i;
        else if(m[i] < m[minInd])
            minInd = i;
        }

    k = m[0];
    m[0] = m[minInd];
    m[minInd] = k;

    for(int i=0; i<n; i++)
        cout << m[i] << " ";

    return 0;
 }
