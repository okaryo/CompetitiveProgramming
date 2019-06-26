#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i ++) cin >> s[i];

  pair<string, int> p[n];
  for (int i = 0; i < n; i ++) {
    string t = "";
    for (int j = s[i].size() - 1; j >= 0; j --) t += s[i][j];
    p[i].first = t, p[i].second = i;
  }
  sort(p, p + n);

  for (int i = 0; i < n; i ++) {
    cout << s[p[i].second] << endl;
  }
}