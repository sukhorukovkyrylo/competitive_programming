// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool is_palindrome(string str) {
    int size = str.size();
    for (int i = 0; i < size; i++) {
        if (str[i] != str[size-i-1]) return false;
    }

    return true;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    if (is_palindrome(str)) cout << "YES";
    else cout << "NO";
}

