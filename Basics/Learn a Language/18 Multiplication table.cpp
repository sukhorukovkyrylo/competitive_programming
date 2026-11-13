// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

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

    for (int i = 1; i <= 12; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    };

}
