// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

string lexicographical_smallest(string s1, string s2) {
    for (int i = 0; i < min(s1.size(), s2.size()); i++) {
        if (s1[i] == s2[i]) continue;
        if (s1[i] < s2[i]) return s1;
        return s2;
    }

    if (s1.size() < s2.size()) return s1;
    return s2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    cin >> str1 >> str2;
    cout << lexicographical_smallest(str1, str2);
}
