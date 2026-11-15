// https://codeforces.com/problemset/problem/1328/A

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
        int a, b;
        cin >> a >> b;
        if (a % b == 0) cout << 0 << endl;
        else cout << b - (a % b) << endl;
    }


}



