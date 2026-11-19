// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

int possible_ways(int current, int end) {
    if (current > end) return 0;
    if (current == end) return 1;
    return possible_ways(current + 1, end) + possible_ways(current + 2, end) + possible_ways(current + 3, end);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int start, end;
    cin >> start >> end;
    cout << possible_ways(start, end);

}

