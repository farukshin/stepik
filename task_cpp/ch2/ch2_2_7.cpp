#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c;
    cout << 18 * a * a - 4 * (a * a - 2 * a * b + b * b) * (a * a - 2 * a * b + b * b) - 4 * a * c + c * c << endl;
    return 0;
}
