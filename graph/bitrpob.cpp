#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void countmax(ll num) {

    ll x = x % 2 ? ceil(log2(num)) : log2(num) + 1;

    for (ll i = 0; i < x; i++)
        num = (num ^ (1 << i));

    cout << num << endl;
}

int main() {
    ll t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        countmax(n);
    }
    return 0;
}
