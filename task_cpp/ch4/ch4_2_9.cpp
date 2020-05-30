#include <iostream>
using namespace std;
int main()
{
    int a, b, ans = 0;
    bool fl = false;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (i % 10 + i / 100 == (i / 10) % 10)
        {
            cout << i << " ";
            fl = true;
        }

    cout << (!fl ? "NO" : "") << endl;

    return 0;
}
