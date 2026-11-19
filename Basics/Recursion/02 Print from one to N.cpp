// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

void print_1_n(int n, int k=1) {
    if (n < k) return;
    cout << k << endl;
    print_1_n(n, k+1);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    print_1_n(n);


}



