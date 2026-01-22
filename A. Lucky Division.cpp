#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;
    q.push(4);
    q.push(7);

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        if (x > n) break;

        if (n % x == 0) {
            cout << "YES\n";
            return 0;
        }

        q.push(x * 10 + 4);
        q.push(x * 10 + 7);
    }

    cout << "NO\n";
    return 0;
}
