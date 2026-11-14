// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

vector<int> binary(int num) {
    vector<int> result;
    for (int i = 0; i < 32 && num >= (1 << i); i++) {
        if (num & (1 << i)) {
            result.push_back(1);
        } else result.push_back(0);
    };
    return result;
}

bool is_palindrome(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != vec[vec.size() - i - 1]) return false;
    };
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    if (a % 2 == 1 && is_palindrome(binary(a))) cout << "YES";
    else cout << "NO";
}

