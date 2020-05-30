#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int k1, k2, k3;
    k1 = a * b * c * c + a * b * b * c + a * b * c * c;
    k2 = 3 * a * a - 2 * b * b * b + 4 * c * c;
    k3 = 5 * a * b + a * a * b * b * c * c - 6;

    cout << k1 << endl
         << k2 << endl
         << k3 << endl
         << k1 * k1 - 4 * k2 * k2 + k3 * k3 << endl;

    return 0;
}
