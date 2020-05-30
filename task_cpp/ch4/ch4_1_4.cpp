#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
        cout << (i % 2 == 0 ? "5" : "3");
    cout << endl;

    return 0;
}
