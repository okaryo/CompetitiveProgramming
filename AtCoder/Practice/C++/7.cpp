#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;

  int n = s.size();
  vector<int> cnt(3, 0); // 0: a, 1: b, 2: c
  for (int i = 0; i < n; i ++) {
    cnt[s[i] - 'a'] ++;
  }

  string ans = "NO";
  if ((abs(cnt[0] - cnt[1]) <= 1) && (abs(cnt[1] - cnt[2]) <= 1) && (abs(cnt[2] - cnt[0]) <= 1)) ans = "YES";
  cout << ans << endl;
}