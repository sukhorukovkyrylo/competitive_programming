// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    cout << fibonacci(n);


}


