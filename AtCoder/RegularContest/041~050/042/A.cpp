#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  pair<int, int> p[n];
  for (int i = 0; i < n; i ++) p[i].second = i+1;
  for (int i = m - 1; i >= 0; i --) {
    int t; cin >> t;
    p[t-1].first = i - m;
  }

  sort(p, p + n);
  for (int i = 0; i < n; i ++) {
    cout << p[i].second << endl;
  }
}
