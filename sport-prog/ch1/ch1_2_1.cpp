#include <iostream>
using namespace std;

int MAXARR = 100001;
long long res = 0;

int main()
{
    int n = 0;
    int mas[MAXARR];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
        res += mas[i];
    }
    cout << res << endl;

    return 0;
}
