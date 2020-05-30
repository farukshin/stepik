#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a + b) * (a + b) * (a + b) << " " << (c - d) * (c - d) * (c - d) * (c - d) << endl;
    cout << (a + 2 * a * b + b) * (a + 2 * a * b + b) << " " << (c - 3 * c * d * d + 5) * (c - 3 * c * d * d + 5) << " " << 6 * (b * b - 4 * a * c) * (b * b - 4 * a * c) << endl;
    return 0;
}
