// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

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
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        ll result = 0;
        for (int i = x + 1; i < y; i++) {
            if (i % 2) result += i;
        };
        cout << result << endl;
    }
}
