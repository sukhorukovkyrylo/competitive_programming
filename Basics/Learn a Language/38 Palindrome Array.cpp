// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool is_palindrome(vector<int> &a) {
    int size = a.size();
    for (int i = 0; i < size; i++) {
        if (a[i] != a[size-i-1]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (is_palindrome(a)) cout << "YES";
    else cout << "NO";
}
