#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> tarr(n + 1);
        tarr[0] = -1;
        for (int i = 1; i <= n; i++) {
            cin >> tarr[i];
        }

        while (q--) {
            int dest, num;
            cin >> dest >> num;
            stack<int> st;
            int nd = dest;
            st.push(nd);

            while (tarr[nd] != 0) {
                st.push(tarr[nd]);
                nd = tarr[nd];
            }

            int maxi = INT32_MIN;

            while (!st.empty()) {
                int temp = num ^ st.top();
                st.pop();
                maxi = max(maxi, temp);
            }

            cout << maxi << "\n";
        }
    }
    return 0;
}

/*
1
6 6
0 1 1 2 2 3
1 4
2 2
3 1
4 6
5 9
6 1
 */