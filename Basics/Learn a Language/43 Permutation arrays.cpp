// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool vec_are_equal(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);

    if (vec_are_equal(a, b, n)) cout << "yes";
    else cout << "no";


}
