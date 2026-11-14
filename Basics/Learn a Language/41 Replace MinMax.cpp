// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int min_pos = 0, max_pos = 1;
    int min_el = a[0], max_el = a[1];
    for (int i = 0; i < n; i++) {
        if (a[i] < min_el) {
            min_el = a[i];
            min_pos = i;
        }

        if (a[i] > max_el) {
            max_el = a[i];
            max_pos = i;
        }
    }

    swap(a[min_pos], a[max_pos]);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}
