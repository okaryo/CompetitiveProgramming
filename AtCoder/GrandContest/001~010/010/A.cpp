#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, countOdd = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    if (a.at(i) % 2 == 1) {
      countOdd ++;
    }
  }

  string ans;
  if (countOdd % 2 == 0) {
    ans = "YES";
  } else {
    ans = "NO";
  }

  cout << ans << endl;
}
