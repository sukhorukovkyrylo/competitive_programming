// https://cses.fi/problemset/task/2165

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

void hanoi(int n, int from, int to) {
    int storage = 6 - from - to;
    if (n == 0) {
        return;
    }

    hanoi(n-1, from, storage);
    cout << from << " " << to << endl;
    hanoi(n-1, storage, to);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    cout << (1LL << n) - 1 << endl;
    hanoi(n, 1, 3);

}

