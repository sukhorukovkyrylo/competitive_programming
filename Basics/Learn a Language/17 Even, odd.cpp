// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp % 2) odd++;
        else even++;

        if (temp > 0) positive++;
        else if (temp < 0) negative++;
    };

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

}