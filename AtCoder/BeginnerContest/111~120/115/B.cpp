#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int max = 100, mark;
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (a.at(i) >= max) {
      max = a.at(i);
      mark = i;
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i ++) {
    if (i == mark) {
      sum += a.at(mark) / 2;
    } else {
      sum += a.at(i);
    }
  }

  cout << sum << endl;
}
