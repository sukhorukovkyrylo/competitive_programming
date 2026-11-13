// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

void draw_tree_part(const int n, int &space, int &star, const int reverse=1) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < space; j++) cout << ' ';
        for (int j = 0; j < star; j++) cout << '*';
        cout << endl;
        space -= 1 * reverse;
        star += 2 * reverse;
    };
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int space = n - 1;
    int star = 1;
    draw_tree_part(n, space, star, 1);
    space += 1;
    star -= 2;
    draw_tree_part(n, space, star, -1);
}
