#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 10) * (n / 10 % 10) * (n / 100) == 0 ? "YES" : "NO") << endl;
    return 0;
}
