#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<bool> b(8);
  int fc = 0;
  for(int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (a.at(i) <= 399) {
      b.at(0) = true;
    } else if (a.at(i) <= 799) {
      b.at(1) = true;
    } else if (a.at(i) <= 1199) {
      b.at(2) = true;
    } else if (a.at(i) <= 1599) {
      b.at(3) = true;
    } else if (a.at(i) <= 1999) {
      b.at(4) = true;
    } else if (a.at(i) <= 2399) {
      b.at(5) = true;
    } else if (a.at(i) <= 2799) {
      b.at(6) = true;
    } else if (a.at(i) <= 3199) {
      b.at(7) = true;
    } else {
      fc ++;
    }
  }

  int sum = 0;
  for (int i = 0; i < 8; i ++) {
    if (b.at(i)) {
      sum ++;
    }
  }

  if (sum == 0) {
    cout << 1 << " " << fc << endl;
  } else {
    cout << sum << " " << sum + fc << endl;
  }
}
