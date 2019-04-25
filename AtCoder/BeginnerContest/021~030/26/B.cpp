#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  double sum = 0;
  for (int i = n - 1; i >= 0; i --) {
    if (i % 2 == 0) {
      sum += a.at(i) * a.at(i);
    } else {
      sum -= a.at(i) * a.at(i);
    }
  }
  double ans = abs(sum) * M_PI;
  cout << setprecision(15) <<  ans << endl;
}
