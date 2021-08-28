#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  pair<int, int> a[n], b[n];
  for (int i = 0; i < n; i ++) {
    int s, t;
    cin >> s >> t;
    a[i].first = s, a[i].second = t;
    b[i].first = t, b[i].second = s;
  }

  sort(a, a + n);
  sort(b, b + n);
}