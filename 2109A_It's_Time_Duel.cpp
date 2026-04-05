#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;

        // dp[w] = is it possible for player i to have win-status w entering duel i?
        vector<bool> dp(2, false);
        dp[0] = true;

        for (int i = 0; i < n - 1; i++) {
            vector<bool> ndp(2, false);
            for (int w = 0; w < 2; w++) {
                if (!dp[w]) continue;
                // Player i wins duel i → player i final status = 1
                if (1 == a[i]) ndp[0] = true;
                // Player i+1 wins duel i → player i final status = w
                if (w == a[i]) ndp[1] = true;
            }
            dp = ndp;
        }

        bool anyValid = false;
        for (int w = 0; w < 2; w++)
            if (dp[w] && w == a[n - 1]) anyValid = true;

        cout << (anyValid ? "NO" : "YES") << "\n";
    }
}