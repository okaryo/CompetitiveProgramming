#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;

  int b = 0, w = 0;
  for (int i = 0; i < n; i ++) {
    if (s[i] == '#') b ++;
    else w ++;
  }
  int ans = min(b, w);
  vector<int> a;
  if (s[0] == '.') a.push_back(0);
  int cnt = 1;
  for (int i = 1; i < n; i ++) {
    if (s[i] != s[i-1]) {
      a.push_back(cnt);
      cnt = 0;
    }
    cnt ++;
  }
  a.push_back(cnt);
  if (s[n-1] == '#') a.push_back(0);

  int bv = 0, wv = w;
  for (int i = 0; i < a.size(); i += 2) {
    bv += a[i];
    wv -= a[i+1];
    ans = min(ans, bv + wv);
  }

  cout << ans << endl;
}
