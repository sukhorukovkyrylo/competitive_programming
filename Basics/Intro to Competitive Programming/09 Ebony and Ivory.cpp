// https://codeforces.com/problemset/problem/633/A

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int is_possible(int a, int b, int c) {
    for (int i = 0; i <= 10000; i++) {
        if ((c - i * a) % b == 0 && (c - i * a) >= 0) return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if (is_possible(a, b, c)) cout << "Yes";
    else cout << "No";



}


