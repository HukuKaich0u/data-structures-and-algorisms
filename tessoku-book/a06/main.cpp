#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1, 0), l(q), r(q);
    for (int i = 0; i < n; i++) {
        cin >> a[i + 1];
    }
    for (int j = 0; j < q; j++) {
        cin >> l[j] >> r[j];
    }

    vector<int> s(n + 1, 0);
    for (int i = 0; i < n; i++) {
        s[i + 1] = s[i] + a[i + 1];
    }

    for (int i = 0; i < q; i++) {
        cout << s[r[i]] - s[l[i] - 1] << endl;
    }

    return 0;
}