// Claude coded

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        
        // Try removing 'left' elements from the front and 'right' from the back
        // new min = a[left], new max = a[n-1-right]
        // need left + right minimized, and same parity
        int ans = n - 1; // worst case: leave 1 element (always fashionable)
        for (int left = 0; left < n; left++) {
            for (int right = 0; right < n - left; right++) {
                int mn = a[left];
                int mx = a[n - 1 - right];
                if ((mn + mx) % 2 == 0) {
                    ans = min(ans, left + right);
                }
            }
        }
        cout << ans << "\n";
    }
}