#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();
  vector<int> num(26, 0);
  rep(i, n) {
    num[s[i] - 'a'] ++;
  }

  vector<int> even, odd;
  rep(i, 26) {
    if (num[i] == 0) continue;
    if (num[i] % 2 == 0) even.push_back(num[i]);
    else odd.push_back(num[i]);
  }

  int ans;
  if (odd.size() <= 1) {
    ans = n;
  } else {
    int k = odd.size();
    ans = 2 * ((n - k ) / (2 * k)) + 1;
  }

  cout << ans << endl;
}