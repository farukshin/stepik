#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    bool fl = false;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        if (n % 2 == 0 && n / 100 == 0 && n / 10 != 0)
            k++;
        n = n / 10;
    }
    cout << k << endl;

    return 0;
}
