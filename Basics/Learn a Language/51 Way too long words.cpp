// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

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

    while (n--) {
        string word;
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
        } else cout << word << endl;
    }
}

