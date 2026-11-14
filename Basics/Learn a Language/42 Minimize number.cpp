// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int two_power_k(int n) {
    int power = 0;
    while (n % (1 << power) == 0) power++;
    return power-1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans = 100;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ans = min(ans, two_power_k(temp));
    }

    cout << ans;
}
