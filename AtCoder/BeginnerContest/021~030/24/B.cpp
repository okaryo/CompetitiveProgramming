#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> time(n);
  for (int i = 0; i < n; i ++) {
    cin >> time.at(i);
  }

  int sum = t;
  if (n == 1) {
    cout << sum << endl;
    return 0;
  }

  for (int i = 0; i < n - 1; i ++) {
    if (time.at(i + 1) - time.at(i) > t) {
      sum += t;
    } else {
      sum += time.at(i + 1) - time.at(i);
    }
  }
  cout << sum << endl;
}
