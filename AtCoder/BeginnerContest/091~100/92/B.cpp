#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int count = n;
  for (int i = 0; i < n; i ++) {
    int tmp = a.at(i);
    while (d >= tmp + 1) {
      count ++;
      tmp += a.at(i);
    }
  }
  int ans = count + x;

  cout << ans << endl;
}
