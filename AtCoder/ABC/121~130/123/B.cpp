#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int sum = 0;
  vector<int> a;
  for (int i = 0; i < 5; i ++) {
    int t; cin >> t;
    if (t % 10 == 0) sum += t;
    else a.push_back(t);
  }

  if (a.size() == 0) {
    cout << sum << endl;
    return 0;
  }

  int x;
  int y = 10;
  for (int i = 0; i < a.size(); i ++) {
    int s = a[i] % 10;
    if (s < y) x = i, y = s;
  }
  sum += a[x];

  for (int i = 0; i < a.size(); i ++) {
    if (i == x) continue;
    sum += a[i] + 10 - (a[i] % 10);
  }

  cout << sum << endl;
}