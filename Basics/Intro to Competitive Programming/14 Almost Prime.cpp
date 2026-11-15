// https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

bool is_almost_prime(vector<int> &primes, int n) {
    int div = 0;
    for (int prime: primes) {
        if (n % prime == 0) div++;
    }

    return (div == 2);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> p;
    for (int i = 2; i <= 3000; i++) {
        bool is_prime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) is_prime = false;
        }
        if (is_prime) p.push_back(i);
    }

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (is_almost_prime(p, i)) cnt++;
    }

    cout << cnt;



}



