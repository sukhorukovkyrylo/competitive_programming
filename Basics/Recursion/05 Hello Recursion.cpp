// https://vjudge.net/problem/SPOJ-HRECURS

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

int sum_array(int a[], int n, int k = 0, int s = 0) {
    if (k == n) return s;
    return sum_array(a, n, k+1, s + a[k]);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, cnt=1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << "Case " << cnt++ << ": " << sum_array(a, n) << endl;
    }


}





