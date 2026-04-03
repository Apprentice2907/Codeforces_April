// chatGPT helped logic

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long ans = 0;

        {
            long long temp = k, count = 0;

            if (temp >= a) {
                long long c1 = (temp - a) / x + 1;
                count += c1;
                temp -= c1 * x;
            }

            if (temp >= b) {
                long long c2 = (temp - b) / y + 1;
                count += c2;
            }

            ans = max(ans, count);
        }

        {
            long long temp = k, count = 0;

            if (temp >= b) {
                long long c2 = (temp - b) / y + 1;
                count += c2;
                temp -= c2 * y;
            }

            if (temp >= a) {
                long long c1 = (temp - a) / x + 1;
                count += c1;
            }

            ans = max(ans, count);
        }

        cout << ans << "\n";
    }

    return 0;
}