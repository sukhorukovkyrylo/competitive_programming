// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool find_x(int n, int m, int x, vector<vector<int>> a) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) return true;
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }

    int x;
    cin >> x;
    if (find_x(n, m, x, a)) cout << "will not take number";
    else cout << "will take number";
}

