// https://vjudge.net/problem/AtCoder-abc214_b

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int a = 0; a <= 100; a++) {
        for (int b = 0; b <= 100; b++) {
            for (int c = 0; c <= 100; c++) {
                if (a + b + c <= s && a * b * c <= t) cnt++;
            }
        }
    }

    cout << cnt;



}


