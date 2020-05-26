#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0,min;
    cin >> n;

    for(int i=0; i<n; i++)
        {
        cin >> m[i];
        if(i==0)
            min = m[0];
        else if(m[i] < min)
            min = m[i];
        }

    for(int i=0; i<n; i++)
        if(m[i] == min)
            k++;


     cout << k << endl;

    return 0;
 }
