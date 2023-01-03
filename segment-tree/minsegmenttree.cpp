#include <bits/stdc++.h>

using namespace std;

class SegmentTree {
   private:
    vector<int> segment_arr;

   public:
    SegmentTree(int n) {
        segment_arr.resize(4 * n + 1);
    }

    void build(int ind, int low, int high, vector<int> &arr) {
        if (low == high) {
            segment_arr[ind] = arr[low];
            return;
        }

        int mid = low + (high - low) / 2;
        build((2 * ind) + 1, low, mid, arr);
        build((2 * ind) + 2, mid + 1, high, arr);
        segment_arr[ind] = min(segment_arr[(2 * ind) + 1], segment_arr[(2 * ind) + 2]);
    }

    int query(int ind, int low, int high, int lind, int rind) {
        // 1. No Overlap
        /*
            [lind, rind] [low, high]
            [low, high] [lind, rind]
         */
        if (rind < low or high < lind) {
            return INT32_MAX;
        }

        // 2. Copmlete overlap
        /*
            lind low high rind
         */
        if (low >= lind and high <= rind) {
            return segment_arr[ind];
        }
        // 3. Partial overlap
        int mid = low + (high - low) / 2;
        int l = query(2 * ind + 1, low, mid, lind, rind);
        int r = query(2 * ind + 2, mid + 1, high, lind, rind);

        return min(l, r);
    }

    void point_update(int ind, int low, int high, int i, int val) {
        if (low == high) {
            segment_arr[ind] = val;
            return;
        }

        int mid = low + (high - low) / 2;
        if (i <= mid)
            point_update(2 * ind + 1, low, mid, i, val);
        else
            point_update(2 * ind + 2, mid + 1, high, i, val);

        segment_arr[ind] = min(segment_arr[2 * ind + 1], segment_arr[2 * ind + 2]);
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr.push_back(k);
    }

    SegmentTree sg(n);
    sg.build(0, 0, n - 1, arr);
    int q;
    cin >> q;
    while (q--) {
        int type, lind, rind;
        cin >> type >> lind >> rind;

        if (type == 1) {
            cout << sg.query(0, 0, n - 1, lind, rind) << endl;
        } else {
            int i, val;
            cin >> i >> val;
            sg.point_update(0, 0, n - 1, i, val);
        }
    }
}

int main() {
    solve();
    return 0;
}