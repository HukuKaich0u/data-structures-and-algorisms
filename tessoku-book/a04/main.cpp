#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 9; i >= 0; i--) {
        int quotient = n / pow(2, i);
        cout << (quotient % 2);
    }
    
    cout << endl;



    return 0;
}