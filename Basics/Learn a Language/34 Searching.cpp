// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int find_pos(int el, vector<int> vec) {
    int size = vec.size();
    for (int i = 0; i < size; i++) {
        if (vec[i] == el) return i;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    int x;
    cin >> x;

    cout << find_pos(x, a);

}


