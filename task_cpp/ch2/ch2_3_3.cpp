#include <iostream>
#include <queue>
using namespace std;
int main() {
    int a;
    cin >> a;
    queue<int> q;
    while(a>0){
        q.push(a%10);
        a = a / 10;
    }

    while(!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    cout << endl;

  return 0;
}
