// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

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

    int s = 0;
    for (int i = 0; i < n; i++) {
        char temp;
        cin >> temp;
        s += temp - '0';
    }

    cout << s;
}

