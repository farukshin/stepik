#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    cout << ((x <= 2 && y >= 2) || (x >= 5 && y <= -3) ? "Inside" : "Outside") << endl;
    return 0;
}
