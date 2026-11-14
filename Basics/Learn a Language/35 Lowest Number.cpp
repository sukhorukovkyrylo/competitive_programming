// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

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
    for (int i = 0; i < n; i++) cin >> a[i];
    int lowest = a[0], pos = 1;
    for (int i = 0; i < n; i++) {
        if (lowest > a[i]) {
            lowest = a[i];
            pos = i+1;
        };
    }

    cout << lowest << ' ' << pos;

}
