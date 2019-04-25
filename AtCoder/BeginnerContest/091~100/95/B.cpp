#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> m(n);
  for (int i = 0; i < n; i ++) {
    cin >> m.at(i);
  }
  sort(m.begin(), m.end());

  int count = n;
  for (int i = 0; i < n; i ++) {
    x -= m.at(i);
  }

  while (x >= m.at(0)) {
    count ++;
    x -= m.at(0);
  }

  cout << count << endl;
}
