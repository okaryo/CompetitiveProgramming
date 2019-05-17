#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int x = stoi(a + b); //文字列を整数に変換

  for (int i = 1; i <= 1000; i ++) {
    if (i * i == x) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
