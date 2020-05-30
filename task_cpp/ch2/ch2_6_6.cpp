#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d;
    cin >> x;
    a = x / 1000;
    b = x / 100 % 10;
    c = x / 10 % 10;
    d = x % 10;

    if (d)
        cout << d << c << b << a << endl;
    else if (c)
        cout << c << b << a << endl;
    else if (b)
        cout << b << a << endl;
    else if (a)
        cout << a << endl;

    cout << endl;
    return 0;
}
