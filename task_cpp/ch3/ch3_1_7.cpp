#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (n % 10 % 2 == 0 && n / 10 % 2 == 0 ? "YES" : "NO") << endl;
    return 0;
}
