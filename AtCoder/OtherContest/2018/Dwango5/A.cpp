#include <bits/stdc++.h>
using namespace std;

int main() {
  double n, sum = 0;
  cin >> n;
  vector<double> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  double ave = sum / n;
  double ans = 0, tmp = 100;
  for (int i = 0; i < n; i ++) {
    if (abs(ave - a.at(i)) < tmp) {
      ans = i;
      tmp = abs(ave - a.at(i));
    }
  }
  cout << ans << endl;
}
