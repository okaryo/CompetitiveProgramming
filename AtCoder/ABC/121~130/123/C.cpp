#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL N, ans;
  vector<LL> a(5);
  cin >> N;
  for (int i = 0; i < 5; i ++) cin >> a[i];
  sort(a.begin(), a.end());

  LL x = N / a[0];
  if (N % a[0] != 0) x ++;

  ans = x + 4;

  cout << ans << endl;
}