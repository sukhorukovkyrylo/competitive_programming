// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

bool is_beautiful(int n) {
    set<int> checker;
    int size = 0;
    while (n > 0) {
        checker.insert(n % 10);
        n /= 10;
        size++;
    }

    return (size == checker.size());

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y;
    cin >> y;
    for (int i = y + 1; i < 1e5; i++) {
        if (is_beautiful(i)) {
            cout << i;
            break;
        }
    }



}


