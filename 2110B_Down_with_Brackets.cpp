#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int depth = 0, topGroups = 0;
        for (char c : s) {
            if (c == '(') depth++;
            else {
                depth--;
                if (depth == 0) topGroups++;
            }
        }
        
        cout << (topGroups >= 2 ? "YES" : "NO") << "\n";
    }
    return 0;
}