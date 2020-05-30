#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 10 + n / 10) > 10 ? "YES" : "NO") << endl;
    return 0;
}
