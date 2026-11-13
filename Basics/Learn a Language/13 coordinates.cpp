// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) cout << "Origem";
    else if (a == 0) cout << "Eixo Y";
    else if (b == 0) cout << "Eixo X";
    else {
        cout << "Q";
        if (a > 0 && b > 0) cout << 1;
        else if (a < 0 && b > 0) cout << 2;
        else if (a < 0 && b < 0) cout << 3;
        else cout << 4;
    };
}