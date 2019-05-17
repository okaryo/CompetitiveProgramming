#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<string> s(n);
  vector<int> d(n);
  for (int i = 0; i < n; i ++) {
    cin >> s.at(i) >> d.at(i);
    if (d.at(i) < a) {
      d.at(i) = a;
    } else if (d.at(i) > b) {
      d.at(i) = b;
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i ++) {
    if (s.at(i) == "West") {
      sum += d.at(i) * -1;
    } else {
      sum += d.at(i);
    }
  }
  if (sum > 0) {
    cout << "East" << " " << sum << endl;
  } else if (sum == 0) {
    cout << 0 << endl;
  } else {
    cout << "West" << " " << sum * -1 << endl;
  }
}
