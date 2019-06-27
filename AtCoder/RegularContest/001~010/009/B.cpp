#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  map<int, int> mp;
  for (int i = 0; i < 10; i ++) {
    int t; cin >> t;
    mp[t] = i;
  }

  int n; cin >> n;
  vector<string> a(n);
  vector<string> b(n);
  pair<int, int> p[n];
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    b[i] = "";
    for (int j = 0; j < a[i].size(); j ++) {
      b[i] += mp[a[i][j] - '0'] + '0';
    }
    p[i].first = stoi(b[i]), p[i].second = i;
  }

  sort(p, p + n);
  for (int i = 0; i < n; i ++) {
    cout << a[p[i].second] << endl;
  }
}