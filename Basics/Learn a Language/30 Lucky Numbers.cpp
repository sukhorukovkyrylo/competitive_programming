// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool is_lucky(int num) {
    int n = num;
    while (num > 0) {
        if (num % 10 != 4 && num % 10 != 7) return false;
        num /= 10;
    }
    cout << n << ' ';
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (is_lucky(i)) cnt++;
    };
    if (cnt == 0) cout << -1;
}

