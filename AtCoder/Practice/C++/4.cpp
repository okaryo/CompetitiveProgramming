#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<int> p1(n), p2(n);
  p1[0] = 1, p2[0] = -1;
  if (n % 2 == 0) p1[n - 1] = -1, p2[n - 1] = -1;
  else p1[n - 1] = 1, p2[n - 1] = -1;
  for (int i = 1; i < n - 1; i ++) {
    if (i % 2 == 0) p1[i] = 2, p2[i] = -2;
    else p1[i] = -2, p2[i] = 2;
  }
  sort(p1.begin(), p1.end());
  sort(p2.begin(), p2.end());


  LL sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i ++) {
    sum1 += a[i] * p1[i];
    sum2 += a[i] * p2[i];
  }

  cout << max(sum1, sum2) << endl;
}