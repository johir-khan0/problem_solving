#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> colors;

    colors.insert(a);
    colors.insert(b);
    colors.insert(c);
    colors.insert(d);

    // unique color count = colors.size()
    int unique = colors.size();

    // need to buy = 4 - unique
    cout << 4 - unique;

    return 0;
}