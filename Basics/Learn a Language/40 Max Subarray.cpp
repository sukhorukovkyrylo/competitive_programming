// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int m = a[i];
                for (int k = i + 1; k <= j; k++) m = max(m, a[k]);
                cout << m << ' ';
            }
        }
        cout << endl;
    }
}
