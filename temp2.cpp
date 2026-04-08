#include <iostream>
using namespace std;
int noofdiv(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt;
}
void solve() {
    int x, y;
    int m = 676767677;
    cin >> x >> y;

    int n = x + y;

    // Case: all same elements
    if (x == 0 || y == 0) {
        cout << noofdiv(n) % m << endl;
        for (int i = 0; i < x; i++){
            cout << 1 << " ";
        }
        for (int i = 0; i < y; i++){
            cout << -1 << " ";
        }
        cout << endl;
        return;
    }

    // Otherwise answer = 1
    cout << 1 << endl;

    // Construct: all 1s then all -1s
    for(int i = 0; i < x; i++){
        cout << 1 << " ";
    }
    for(int i = 0; i < y; i++){
        cout << -1 << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}