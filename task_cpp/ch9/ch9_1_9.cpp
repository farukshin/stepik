#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    bool fl = false;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        if (n > k)
            k = n;
    }
    cout << k << endl;

    return 0;
}
