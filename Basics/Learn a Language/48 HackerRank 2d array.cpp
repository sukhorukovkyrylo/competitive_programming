// https://vjudge.net/problem/HackerRank-2d-array

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 6;

    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }

    int s = -1e7;
    for (int i = 0; i < n-2; i++) {
        for (int j = 0; j < n-2; j++) {
            s = max(s, a[i][j] + a[i][j+1] + a[i][j+2] +
                a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2]);
        }
    }

    cout << s;
}

