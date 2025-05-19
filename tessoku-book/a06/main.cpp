#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), l(q), r(q);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> l[i] >> r[i];
    }

    return 0;
}