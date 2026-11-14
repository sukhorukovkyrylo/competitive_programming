// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);
    for (auto ch: str) {
        if (ch == '\\') break;
        cout << ch;
    }
}

