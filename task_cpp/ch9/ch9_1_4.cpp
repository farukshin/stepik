#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    while (n)
    {
        k = max(n % 10, k);
        n = n / 10;
    }
    cout << k << endl;

    return 0;
}
