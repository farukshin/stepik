#include <iostream>
using namespace std;

int MAX = -1000000001;
int MAXI = -1;
int MAXARR = 100001;

int main()
{
    int n = 0;
    int mas[MAXARR];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
        if (mas[i] > MAX)
        {
            MAX = mas[i];
            MAXI = i;
        }
    }
    cout << MAXI + 1 << endl;

    return 0;
}