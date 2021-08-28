#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  LL n = s.size();
  map<char, int> mp;
  rep(i, n) mp[s[i]] ++;

  LL sum = 0;
  for (auto x : mp) {
    LL t = x.second;
    sum += t * (t - 1) / 2;
  }

  LL ans = n * (n - 1) / 2 - sum + 1;
  cout << ans << endl;
}