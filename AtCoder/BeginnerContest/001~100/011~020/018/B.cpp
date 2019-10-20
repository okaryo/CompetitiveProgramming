#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  vector<int> l(n);
  vector<int> r(n);
  for (int i = 0; i < n; i ++) {
    cin >> l.at(i) >> r.at(i);
  }

  for (int i = 0; i < n; i ++) {
    string tmp = s;
    int x = l.at(i) - 1;
    int y = r.at(i) - 1;
    int z = (r.at(i) - x) / 2;
    while (z >= 0) {
      s.at(x) = tmp.at(y);
      s.at(y) = tmp.at(x);
      x ++;
      y --;
      z --;
    }
  }

  cout << s << endl;
}
