// https://codeforces.com/problemset/problem/102/B

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

string to_digits_sum(string num) {
    int s = 0;
    for (char digit: num) s += (digit - '0');
    return to_string(s);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string number;
    cin >> number;
    int cnt = 0;
    while (number.size() > 1) {
        number = to_digits_sum(number);
        cnt++;
    }

    cout << cnt;


}



