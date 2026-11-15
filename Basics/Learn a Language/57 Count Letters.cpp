// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    map<char,int> frequency;
    set<char> chars;
    for (char ch: str) {
        chars.insert(ch);
        frequency[ch]++;
    }

    for (char ch: chars) {
        cout << ch << " : " << frequency[ch] << endl;
    }
}

