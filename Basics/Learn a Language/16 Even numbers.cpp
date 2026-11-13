// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

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
    for (int i = 2; i <= n; i+=2) cout << i << endl;
    if (n == 1) cout << -1;
}