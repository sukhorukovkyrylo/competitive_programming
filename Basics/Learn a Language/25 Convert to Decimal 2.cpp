// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ones = 0;

        while (n) {
            if (n % 2) ones++;
            n /= 2;
        };

        int result = 0;
        for (int i = 0; i < ones; i++) {
            result += (1 << i);
        }
        cout << result << endl;
    };
}
