#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a * a - b) * (a * a - b) - 4 * a * b * b + 4 * (a * a * a - 5) * (a * a * a - 5) << endl;
    return 0;
}
