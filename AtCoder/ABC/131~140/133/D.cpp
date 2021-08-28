#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n;
  cin >> n;
  vector<LL> a(n);
  LL sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    sum += a[i];
  }

  LL x = sum;
  for (int i = 1; i < n; i += 2) x -= 2 * a[i];

  cout << x;
  for (int i = 1; i < n; i ++) {
    x = 2 * a[i - 1] - x;
    cout << " " << x; 
  }
  cout << endl;
}