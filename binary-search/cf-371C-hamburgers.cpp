#include <bits/stdc++.h>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <complex>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<int, pii>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define max_heap priority_queue<int>
#define min_heap priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)                       \
    for (auto x : a) cout << x << " "; \
    cout << endl
#define printpair(a) \
    for (auto x : a) cout << x.F << " " << x.S << endl
#define printrange(a, x, y)                          \
    for (int i = x; i < y; i++) cout << a[i] << " "; \
    cout << endl

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

int hb, hs, hc, cb, cs, cc, amt, rb = 0, rs = 0, rc = 0;

bool isvalid(int mid) {
    int br = rb * mid, sa = rs * mid, ch = rc * mid;

    int purb = br - hb, purs = sa - hs, purc = ch - hc;
    int cost = ((purb * cb) >= 0 ? (purb * cb) : 0) + ((purc * cc) >= 0 ? (purc * cc) : 0) + ((purs * cs) >= 0 ? (purs * cs) : 0);

    if (amt - cost >= 0)
        return true;
    else
        return false;
}

void solve() {
    string recipe;
    cin >> recipe;
    for (auto x : recipe) {
        if (x == 'B')
            rb++;
        else if (x == 'S')
            rs++;
        else
            rc++;
    }
    cin >> hb >> hs >> hc >> cb >> cs >> cc >> amt;

    int ans = 0;
    int low = 0, high = 1e14;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isvalid(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}