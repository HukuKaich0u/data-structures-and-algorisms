#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    unsigned int X = 0;
    for (int i = 0; i <= M; i++) {
        X += pow(N, i);
    }
    if (X <= pow(10, 9.0)) {
        cout << X << endl;
    } else {
        cout << "inf" << endl;
    }
}