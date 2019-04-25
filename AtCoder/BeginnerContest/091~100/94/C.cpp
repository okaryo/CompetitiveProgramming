#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> b(n + 1);
  for (int i = 1; i <= n; i ++) {
    cin >> a.at(i);
    b.at(i) = a.at(i);
  }

  sort(a.begin(), a.end());
  int x = a.at(n / 2 + 1), y = a.at(n / 2);
  for (int i = 1; i <= n; i ++) {
    if (b.at(i) <= y) cout << x << endl;
    else cout << y << endl;
  }
}
