#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> c(n), s(n), f(n);
  for (int i = 0; i < n-1; i ++) cin >> c[i] >> s[i] >> f[i];

  int t;
  for (int i = 0; i < n; i ++) {
    t = 0;
    for (int j = i; j < n-1; j ++) {
      if (t < s[j]) t = s[j];
      else if (t % f[j] == 0);
      else t = t + f[j] - (t%f[j]);
      t += c[j];
    }
    cout << t << endl;
  }
}
