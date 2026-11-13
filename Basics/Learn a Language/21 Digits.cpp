// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

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
        string number;
        cin >> number;
        for (int i = number.size() - 1; i >= 0; i--) cout << number[i] << ' ';
        cout << endl;
    }
}
