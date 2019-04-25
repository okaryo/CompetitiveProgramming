#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int m = 2025 - n;
  vector<int> a, b;
  for (int i = 1; i <= 9; i ++) {
    for (int j = 1; j <= 9; j ++) {
      if (i * j == m) {
        a.push_back(i);
        b.push_back(j);
      }
    }
  }

  for (int i = 0; i < a.size(); i ++) {
    cout << a.at(i) << " x " << b.at(i) << endl;
  }
}
