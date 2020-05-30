#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0, cur = 0;
    cin >> a >> b;
    while (count != a)
    {
        cur += b;
        cout << cur << " ";
        count++;
    }
    cout << endl;

    return 0;
}
