// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

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

    vector<int> a(n, 0);
    for (int i = n-1; i >= 0; i--) cin >> a[i];

    for (int i = 0; i < n; i++) cout << a[i] << ' ';

}
