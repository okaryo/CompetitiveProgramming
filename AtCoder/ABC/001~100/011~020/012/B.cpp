#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int h, m, s, tmp = n;
  h = n / 3600;
  tmp %= 3600;
  m = tmp / 60;
  tmp %= 60;
  s = tmp;
  if (h >= 10) {
    cout << h << ":";
  } else {
    cout << 0 << h << ":";
  }
  if (m >= 10) {
    cout << m << ":";
  } else {
    cout << 0 << m << ":";
  }
  if (s >= 10) {
    cout << s << endl;
  } else {
    cout << 0 << s << endl;
  }
}
