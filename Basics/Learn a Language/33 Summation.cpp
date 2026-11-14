// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

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

    ll s = 0;
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        s += temp;
    };

    cout << abs(s);

}

