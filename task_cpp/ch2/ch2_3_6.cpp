#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, p = 100000;
    cin >> n;
    int i = 6;
    while (i--)
    {
        cout << (n / p == 0 ? 0 : n / p);
        k++;
        if (k % 2 == 0)
            cout << " ";
        n = n % p;
        p /= 10;
    }
    //cout << k<< endl;
    return 0;
}
