#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j ++) {
      if (i == j) continue;
      if (a.at(i) == a.at(j)) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  for (int i = 1; i < n; i ++) {
    if (a.at(i).at(0) != a.at(i - 1).back()) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
