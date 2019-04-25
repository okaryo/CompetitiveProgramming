#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> x = {a, b};
  vector<int> y = {c, d};

  for (int i = 0; i <= 1; i ++) {
    for (int j = 0; j <= 1; j ++) {
      if (x.at(i) == y.at(j)) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
}
