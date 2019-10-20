#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  vector<int> p(k);
  for (int i = 0; i < k; i ++) {
    cin >> p.at(i);
    if (p.at(i) == a || p.at(i) == b) {
      cout << "NO" << endl;
      return 0;
    }
  }

  for (int i = 0; i < k - 1; i ++) {
    for (int j = i + 1; j < k; j ++) {
      if (p.at(i) == p.at(j)) {
        cout << "NO" << endl;
        return 0;
      }
    }
  }

  cout << "YES" << endl;
}
