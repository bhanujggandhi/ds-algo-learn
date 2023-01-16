#include <bits/stdc++.h>

using namespace std;

int solve(int *arr, int n, int s, vector<vector<int>> &dp) {

    if (n == 0 || s == 0) return 0;
    if (dp[n][s] != -1) return dp[n][s];
    if (arr[n - 1] <= s) {
        return dp[n][s] = max(arr[n - 1] + solve(arr, n - 1, s - arr[n - 1], dp), solve(arr, n - 1, s, dp));
    } else {
        return dp[n][s] = solve(arr, n - 1, s, dp);
    }
}
int minDifference(int arr[], int n) {

    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    int sum = s;
    s /= 2;
    vector<vector<int>> dp(n + 1, vector<int>(s + 1, -1));
    int x = solve(arr, n, s, dp);
    int ans = sum - 2 * x;
    return ans;
}

int main() {

    return 0;
}
