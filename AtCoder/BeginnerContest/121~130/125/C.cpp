#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a[i];

  vector<int> left(n+1), right(n+1);
  for (int i = 0; i < n; i ++) left[i+1] = gcd(left[i], a[i]);
  for (int i = n-1; i >= 0; i --) right[i] = gcd(right[i+1], a[i]);

  int ans = 0;
  for (int i = 0; i < n; i ++) {
    int l = left[i];
    int r = right[i+1];
    ans = max(ans, gcd(l, r));
  }

  cout << ans << endl;
}