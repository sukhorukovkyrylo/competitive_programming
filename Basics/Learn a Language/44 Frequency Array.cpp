// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V?adcd1e=caf4fhau8see1i&csrf_token=db8216b3dd739ce9713686038380b9a5

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    map<int, int> b;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        b[temp]++;
    }

    for (int i = 1; i <= m; i++) cout << b[i] << endl;
}

