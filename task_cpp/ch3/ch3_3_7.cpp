#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    cout << (x <= -5 || x >= 6 || (x <= 3 && x >= -2 && y >= 3) ? "Inside" : "Outside") << endl;
    return 0;
}
