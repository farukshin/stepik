#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    cout << (x >= 4 || y >= 3 ? "Inside" : "Outside") << endl;
    return 0;
}
