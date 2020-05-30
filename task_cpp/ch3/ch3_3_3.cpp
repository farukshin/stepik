#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    cout << (x >= 1 && y <= 5 ? "Inside" : "Outside") << endl;
    return 0;
}
