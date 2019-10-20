#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> p(n);
  for (int i = 0; i < n; i ++) {
    cin >> s.at(i) >> p.at(i);
  }

  int sum = 0;
  for (int i = 0; i < n; i ++) {
    sum += p.at(i);
  }
  for (int i = 0; i < n; i ++) {
    if (p.at(i) >= sum / 2 + 1) {
      cout << s.at(i) << endl;
      return 0;
    }
  }
  cout << "atcoder" << endl;
}
