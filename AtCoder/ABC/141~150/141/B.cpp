#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();
  bool flag = true;
  for (int i = 0; i < n; i ++) {
    if (i % 2 == 0 && s[i] == 'L') flag = false;
    if (i % 2 == 1 && s[i] == 'R') flag = false;
  }
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}