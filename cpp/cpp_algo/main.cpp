#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool ans = false;
    for (int i = 1; i <= (1 << n); i++) {
        int sum = 0;

        for (int j = 0; j < n; j++) {
            int wari = i / (1 << j);

            if (wari % 2 == 1) {
                sum += a[j];
            }
        }

        if (sum == k) {
            ans = true;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}