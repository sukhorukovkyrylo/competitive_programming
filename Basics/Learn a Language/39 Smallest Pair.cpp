// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        int pair = a[0] + a[1] + 1 - 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                pair = min(pair, a[i] + a[j] + j - i);
            }
        }
        cout << pair << endl;
    }
}
