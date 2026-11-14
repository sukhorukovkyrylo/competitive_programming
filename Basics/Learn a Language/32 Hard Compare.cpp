// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool checker(ll a, ll b, ll c, ll d) {
    if (b * log(a) > d * log(c)) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;

    cin >> a >> b >> c >> d;
    if (checker(a, b, c, d)) cout << "YES";
    else cout << "NO";

}


