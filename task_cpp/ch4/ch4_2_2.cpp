#include <iostream>
using namespace std;
int main()
{
    int n, a, k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a % 3 == 0 && a % 10 == 2)
            k++;
    }
    cout << k << endl;

    return 0;
}
