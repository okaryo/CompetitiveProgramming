#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i ++) {
    string s;
    cin >> s;
    if (i == n - 1) s.pop_back();
    if (s == "TAKAHASHIKUN") ans ++;
    else if (s == "Takahashikun") ans ++;
    else if (s == "takahashikun") ans ++;
  }

  cout << ans << endl;
}
