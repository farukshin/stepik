#include <iostream>
using namespace std;

const int MAX = 105;
int m[MAX];

int main(){
    int n,k=0,max, min;
    cin >> n;
    bool fl=true;

    for(int i=0; i<n; i++)
    {
        cin >> m[i];
        if(i==0)
        {
            min = m[i];
            max = m[i];
        }
        else if(m[i] > max)
            max = m[i];
        else if(m[i] < min)
            min = m[i];

    }


    for(int i=0; i<n; i++)
        if(m[i] == max)
            cout << min << " ";
        else if(m[i] == min)
            cout << max << " ";
        else
            cout << m[i] << " ";

    return 0;
 }
