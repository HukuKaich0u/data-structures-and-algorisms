#include <bits/stdc++.h>
using namespace std;

int main() {
    int A;
    cin >> A;
    if ((400 % A) == 0) {
        int B = 400 / A;
        cout << B << endl;
    } else {
        cout << -1 << endl;
    }
}