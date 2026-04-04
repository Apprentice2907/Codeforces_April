#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int len = 0;
        while (x > 0) { len++; x >>= 1; }
        cout << 2 * len + 1 << "\n";
    }
    return 0;
}