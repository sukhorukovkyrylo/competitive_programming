// https://codeforces.com/problemset/problem/598/A?locale=en

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s = 0;
        for (int i = 0; i <= 31; i++) {
            if ((1 << i) <= n) s-= 2 * (1 << i);
            else break;
        }

        s += (n * (n+1)) / 2;
        cout << s << endl;
    }



}


