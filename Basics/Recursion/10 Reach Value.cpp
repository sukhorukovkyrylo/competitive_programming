// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

int multiplier1 = 10;
int multiplier2 = 20;

void reach_n(int n, int k, bool &possible) {
    if (n == k) possible=true;
    if (k >= n) return;

    reach_n(n, k * multiplier1, possible);
    reach_n(n, k * multiplier2, possible);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool possible=false;
        reach_n(n, 1, possible);
        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

