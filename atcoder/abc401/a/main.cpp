#include <bits/stdc++.h>
using namespace std;

int main() {
  int S;
  if (cin >> S) {
    if (200 <= S && S <= 299) {
      cout << "Success" << endl;
    } else {
      cout << "Failure" << endl;
    }
  } else {
    cout << "Input error" << endl; // 入力エラーの場合の出力を追加
  }
  return 0;
}