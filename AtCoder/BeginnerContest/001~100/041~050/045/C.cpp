#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

string s;
LL ans = 0;

void dfs(int x, LL now, LL sum) {
  if (x == s.size()) {
    ans += sum + now;
    return;
  }

  LL next_now = now * 10 + (s[x] - '0');
  dfs(x + 1, next_now, sum);
  dfs(x + 1, s[x] - '0', sum + now);
}

int main() {
  cin >> s;
  dfs(1, s[0]-'0', 0);
  cout << ans << endl;
}
