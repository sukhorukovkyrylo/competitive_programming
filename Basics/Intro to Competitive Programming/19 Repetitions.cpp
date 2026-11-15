// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m = 1, current = 1;
    char previous = ' ';
    string input;
    cin >> input;
    for (auto next: input) {
        if (next == previous) current++;
        else {
            m = max(m, current);
            current = 1;
        }
        previous = next;
    }
    m = max(m, current);
    cout << m;


}


