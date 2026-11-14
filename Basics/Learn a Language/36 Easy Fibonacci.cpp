// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

vector<int> fib_array(int size) {
    if (size == 1) return {0};
    vector<int> fib={0,1};
    for (int i = 3; i <= size; i++) {
        fib.push_back(fib[i-2] + fib[i-3]);
    };
    return fib;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (auto el: fib_array(n)) cout << el << ' ';

}
