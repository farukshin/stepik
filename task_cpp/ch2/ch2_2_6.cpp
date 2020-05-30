#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c;
    cout << a * 100 + b * 10 + c << endl
         << a * 100 + c * 10 + b << endl
         << b * 100 + a * 10 + c << endl
         << b * 100 + c * 10 + a << endl
         << c * 100 + a * 10 + b << endl
         << c * 100 + b * 10 + a << endl;
    return 0;
}
