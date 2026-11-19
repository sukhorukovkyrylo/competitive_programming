// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

void recursion(int n) {
    if (n == 0) return;
    cout << "I love Recursion" << endl;
    return recursion(n-1);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    recursion(n);


}


