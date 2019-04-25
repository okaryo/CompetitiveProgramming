#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);
  vector<string> b(m);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < m; i ++) {
    cin >> b.at(i);
  }

  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j ++) {
      if (i + m - 1 >= n || j + m - 1 >= n) {
        continue;
      }

      bool match = true;
      for (int k = 0; k < m; k ++) {
        for (int l = 0; l < m; l ++) {
          if (a.at(i + k).at(j + l) != b.at(k).at(l)) {
            match = false;
          }
        }
      }
      if (match) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}
