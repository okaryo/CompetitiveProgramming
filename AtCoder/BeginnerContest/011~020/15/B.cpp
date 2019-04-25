#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  double m = 0, sum = 0;
  cin >> n;
  vector<double> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (a.at(i) != 0) {
      sum += a.at(i);
      m ++;
    }
  }

  cout << ceil(sum / m) << endl;
}
