#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p[101];     
    int ans[101];   

    // input 
    for(int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    // main logic (reverse)
    for(int i = 1; i <= n; i++) {
        int receiver = p[i];   
        ans[receiver] = i;     
    }

    // output
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}