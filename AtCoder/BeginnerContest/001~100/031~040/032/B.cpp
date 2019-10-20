#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  if (k > s.size()) {
    cout << 0 << endl;
    return 0;
  }

  int x = s.size() - k + 1;
  vector<string> a(x);
  for (int i = 0; i < x ; i ++) {
    for (int j = i; j < k + i; j ++) {
      a.at(i) += s.at(j);
    }
  }

  int cnt = 1;
  sort(a.begin(), a.end());
  for (int i = 1; i < x; i ++) {
    if (a.at(i) != a.at(i - 1)) {
      cnt ++;
    }
  }

  cout << cnt << endl;
}
