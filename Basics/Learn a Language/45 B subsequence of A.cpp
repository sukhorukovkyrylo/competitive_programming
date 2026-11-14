// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] == b[j]) j++;
    }

    if (j == m) cout << "YES";
    else cout << "NO";
}

