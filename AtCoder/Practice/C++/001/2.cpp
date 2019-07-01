#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  pair<int, int> p[n];
  for (int i = 0; i < n; i ++) cin >> p[i].second >> p[i].first;
  sort(p, p + n);
  for (int i = 0; i < n; i ++) {
    cout << p[i].second << " " << p[i].first << endl;
  }
}