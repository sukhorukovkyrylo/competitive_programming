// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }

    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) d1 += a[i][i];
    for (int i = 0; i < n; i++) d2 += a[i][n-i-1];
    cout << abs(d1 - d2);
}

