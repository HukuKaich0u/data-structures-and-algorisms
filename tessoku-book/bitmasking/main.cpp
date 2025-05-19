#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    bool answer = false;

    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            int wari = i / (1 << (j - 1));
            if (wari % 2 == 1) {
                sum += a[j];
            }
        }
        if (sum == k) {
            answer = true;
        }
    }

    if (answer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}