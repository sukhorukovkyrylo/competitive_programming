// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool check_string(string s) {
    for (int i = 0; i < s.size() - 2; i++) {
        if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') return true;
        if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') return true;
    }

    return false;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        if (check_string(str)) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
}

