//
// Created by ksuhoi on 15.11.26.
//

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool check_neighbours(vector<vector<int>> a, int n, int m, int x, int y) {
    vector<pair<int,int>> neighbours = {{x-1, y-1}, {x-1, y}, {x-1, y+1}, {x, y+1}, {x+1, y+1}, {x+1, y}, {x+1, y-1}, {x, y-1}};
    for (auto point: neighbours) {
        if (point.first < 0 || point.second < 0 || point.first >= n || point.second >= m) continue;
        if (a[point.first][point.second]) continue;
        return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char temp;
            cin >> temp;
            a[i][j] = (temp == 'x');
        }
    }

    int x, y;
    cin >> x >> y;
    x--;
    y--;
    if (check_neighbours(a, n, m, x, y)) cout << "yes";
    else cout << "no";

}

