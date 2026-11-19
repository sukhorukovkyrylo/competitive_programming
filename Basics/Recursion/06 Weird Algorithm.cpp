// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

void algorithm(int n) {
    cout << n << ' ';
    if (n == 1) return;
    if (n % 2 == 0) return algorithm(n / 2);
    return algorithm(3 * n + 1);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    algorithm(n);


}





