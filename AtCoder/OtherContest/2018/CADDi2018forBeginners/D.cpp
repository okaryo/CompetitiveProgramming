#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  bool flag = false;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    if (t % 2 == 1) flag = true;
  }
  if (flag) cout << "first" << endl;
  else cout << "second" << endl;
}