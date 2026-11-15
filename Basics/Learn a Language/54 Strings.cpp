// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;

    cin >> str1 >> str2;

    cout << str1.size() << ' ' << str2.size() << endl;
    cout << str1 + str2 << endl;
    swap(str1[0], str2[0]);
    cout << str1 << ' ' << str2;
}

