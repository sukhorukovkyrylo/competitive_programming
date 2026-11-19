// https://atcoder.jp/contests/abc247/tasks/abc247_c

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

string S(int n) {
    if (n == 1) return "1";
    return S(n-1) + " " + to_string(n) + " " + S(n-1);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << S(n);
}