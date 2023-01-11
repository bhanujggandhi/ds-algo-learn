#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define int int64_t

int32_t main() {
    int n, l;
    cin >> n >> l;

    vector<double> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double ans = arr[0];
    ans = max(ans, abs(l - arr[n - 1]));

    for (int i = 0; i < n - 1; i++) {
        double dif = arr[i + 1] - arr[i];
        ans = max(ans, (double)dif / 2.0);
    }

    cout << fixed << setprecision(9) << ans << "\n";
    return 0;
}