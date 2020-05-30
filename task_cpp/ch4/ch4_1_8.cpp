#include <iostream>
using namespace std;
int main()
{
    int a, p = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << p + i << " ";
        p = p + i;
    }
    cout << endl;

    return 0;
}
