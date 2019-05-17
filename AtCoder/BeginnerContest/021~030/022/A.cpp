#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, t;
  cin >> n >> s >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int count = 0;
  for (int i = 0; i < n; i ++) {
    if (a.at(i) >= s && a.at(i) <= t) {
      count ++;
    }
    if (i == n - 1) {
      break;
    }
    a.at(i + 1) += a.at(i);
  }

  cout << count << endl;
}
