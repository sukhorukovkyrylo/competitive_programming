// https://vjudge.net/problem/AtCoder-abc220_a

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int get_multiple(int a, int b, int c) {
    for (int i = c; i <= b; i+=c) {
        if (i >= a && i <= b) return i;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    cout << get_multiple(a, b, c);



}


