#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    cout << (x <= -5 && y >= -7 ? "Inside" : "Outside") << endl;
    return 0;
}
