#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int sum = 0;
  for (int i = 1; i < n; i ++) {
    if (s[i - 1] == 'R' && s[i] == 'L') sum += 2;
  }
  if (s[0] == 'L') sum ++;
  if (s[n - 1] == 'R') sum ++;

  rep(i, k) {
    if (sum > 1) sum -= 2;
    else break;
  }
  if (sum == 0) sum ++;

  cout << n - sum << endl;
}