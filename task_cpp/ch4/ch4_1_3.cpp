#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a;
    for (int i = a + 1; i <= b; i++)
        cout << " " << i;
    cout << endl;

    return 0;
}
