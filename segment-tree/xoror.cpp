#include <bits/stdc++.h>

using namespace std;

void build(int ind, int low, int high, vector<int> &arr, vector<int> &seg, int orr) {
    if (low == high) {
        seg[ind] = arr[low];
        return;
    }

    int mid = low + (high - low) / 2;

    build(2 * ind + 1, low, mid, arr, seg, !orr);
    build(2 * ind + 2, mid + 1, high, arr, seg, !orr);

    if (orr)
        seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
    else
        seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
}

void update(int ind, int low, int high, vector<int> &seg, int orr, int i, int val) {
    if (low == high) {
        seg[ind] = val;
        return;
    }

    int mid = low + (high - low) / 2;

    if (i <= mid)
        update(2 * ind + 1, low, mid, seg, !orr, i, val);
    else
        update(2 * ind + 2, mid + 1, high, seg, !orr, i, val);

    if (orr)
        seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
    else
        seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
}

int main() {
    int n, q;
    cin >> n >> q;
    int ele = pow(2, n);
    vector<int> arr(ele);
    for (int i = 0; i < ele; i++) {
        cin >> arr[i];
    }

    vector<int> seg(4 * ele);

    if (n % 2 == 0)
        build(0, 0, ele - 1, arr, seg, 0);
    else
        build(0, 0, ele - 1, arr, seg, 1);

    while (q--) {
        int i, val;
        cin >> i >> val;
        i--;
        if (n % 2 == 0)
            update(0, 0, ele - 1, seg, 0, i, val);
        else
            update(0, 0, ele - 1, seg, 1, i, val);

        cout << seg[0] << "\n";
    }

    return 0;
}

/*
2 4
1 6 3 5
1 4
3 4
1 2
1 2
 */