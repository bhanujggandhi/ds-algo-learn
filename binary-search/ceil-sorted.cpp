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

int ub(vi& arr, int x) {
    int start = 0, end = arr.size() - 1, ans = INT_MAX;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x) {
            start = mid + 1;
        } else {
            ans = min(ans, mid);
            end = mid - 1;
        }
    }

    return ans == INT_MAX ? -1 : ans;
}

int lb(vi& arr, int x) {
    int start = 0, end = arr.size() - 1, ans = INT_MIN;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x) {
            ans = max(ans, mid);
            start = mid + 1;
        } else
            end = mid - 1;
    }

    return ans == INT_MIN ? -1 : ans;
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;

    int l = lb(arr, x);
    int u = ub(arr, x);
    pii ans = make_pair(l, u);

    cout << ans.F << "    " << ans.S << endl;
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