// https://atcoder.jp/contests/abc051/tasks/abc051_b

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (i + j <= s && s - (i+j) <= k) cnt++;
        }
    }

    cout << cnt;
}


