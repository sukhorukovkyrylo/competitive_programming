// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char ch;
    cin >> ch;

    if (ch - '0' < 10) cout << "IS DIGIT";
    else {
        cout << "ALPHA" << endl;
        if (ch - 'a' >= 0) cout << "IS SMALL";
        else cout << "IS CAPITAL";
    };
}
