// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

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
        ll result = 1;
        for (int i = 2; i <= n; i++) result *= i;
        cout << result << endl;
    };
}
