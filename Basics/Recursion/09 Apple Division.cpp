// https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

void find_minimum(vector<int> a, int n, int total, int sum, int i, int &result) {
    if (i == n) {
        result = min(result, abs(total - 2 * sum));
        return;
    }
    find_minimum(a, n, total, sum+a[i], i+1, result);
    find_minimum(a, n, total, sum, i+1, result);

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n, 0);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    int ans = 1e9;
    find_minimum(a, n, total, 0, 0, ans);
    cout << ans;
}
