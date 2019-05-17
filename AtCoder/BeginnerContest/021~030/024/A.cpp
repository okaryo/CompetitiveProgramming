#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;
  int child = a * s;
  int adult = b * t;
  int sum = child + adult;
  int x = s + t;

  if (x >= k) {
    sum -= c * x;
  }

  cout << sum << endl;
}
