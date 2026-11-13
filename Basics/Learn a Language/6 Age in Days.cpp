// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

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

    cout << n / 365 << " years" << endl;
    n = n % 365;
    cout << n / 30 << " months" << endl;
    cout << n % 30 << " days" << endl;
}
