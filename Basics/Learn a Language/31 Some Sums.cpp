// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int digits_sum(int n) {
    int result = 0;
    while (n > 0) {
        result += n % 10;
        n /= 10;
    };
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    int summation = 0;
    for (int i = 1; i <= n; i++) {
        int digits = digits_sum(i);
        if (digits >= a && digits <= b) {
            summation += i;
        };
    }
    cout << summation;
}


