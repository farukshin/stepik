#include <iostream>
using namespace std;
int main()
{
    int n;
    bool fl = false;
    cin >> n;
    while (n)
    {
        if (n % 10 == 0)
            fl = true;
        n = n / 10;
    }
    cout << (fl ? "YES" : "NO") << endl;

    return 0;
}
