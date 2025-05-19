#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    vector<int> l(n + 1), r(n + 1), c(d + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
    }

    for (int i = 1; i <= n; i++) {
        c[l[i]] += 1;
        c[r[i] + 1] -= 1;
    }

    int ans = 0;
    for (int i = 1; i <= d; i++) {
        ans += c[i];
        cout << ans << endl;
    }

    return 0;
}
