#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  map<string, int> mp;
  int maxv = 0;
  for (int i = 0; i < n; i ++) {
    string s; cin >> s;
    mp[s] ++;
    maxv = max(maxv, mp[s]);
  }

  for (auto x : mp) {
    if (x.second == maxv) cout << x.first << endl;
  }
}
