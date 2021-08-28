#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n; cin >> n;
  vector<string> a(n);
  map<string, LL> mp;
  rep(i, n) {
    string t; cin >> t;
    char b[10];
    for (int i = 0; i < 10; i ++) b[i] = t[i];
    sort(b, b + 10);
    string s = "";
    for (int i = 0; i < 10; i ++) s += b[i];
    mp[s] ++;
  }
  
  LL ans = 0;
  for (auto x : mp) {
    //cout << x.second << endl;
    ans += ((x.second - 1) * (x.second)) / 2;
  }
  cout << ans << endl;
}