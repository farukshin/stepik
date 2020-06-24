#include <iostream>
using namespace std;

int n = 0, q = 0;
int mas[300001];
long long partSum[300001];
int l = 0, r = 0;

int main()
{
    cin >> n >> q;
    mas[0] = 0;
    partSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> mas[i];
        partSum[i] = mas[i] + partSum[i - 1];
    }

    for (int i = 1; i <= q; i++)
    {
        cin >> l >> r;
        cout << partSum[r] - partSum[l - 1] << endl;
    }

    return 0;
}
