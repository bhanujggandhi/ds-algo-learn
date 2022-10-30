#include <bits/stdc++.h>

using namespace std;

void carAssembly(int a[][4], int t[][4], int e[], vector<int> &ans, int i) {
    if (i >= 4) return;

    ans[0] = min(ans[0] + a[0][i], ans[1] + a[0][i] + t[1][i]);
    ans[1] = min(ans[1] + a[1][i], ans[0] + a[1][i] + t[0][i]);

    carAssembly(a, t, e, ans, i + 1);
}

int main() {
    int a[][4] = {{4, 5, 3, 2}, {2, 10, 1, 4}};
    int t[][4] = {{0, 7, 4, 5}, {0, 9, 2, 8}};
    int e[] = {10, 12}, x[] = {18, 7};
    vector<int> ans(2, 0);
    ans[0] = e[0] + a[0][0];
    ans[1] = e[1] + a[1][0];

    carAssembly(a, t, e, ans, 1);

    cout << max(ans[0], ans[1]);

    return 0;
}