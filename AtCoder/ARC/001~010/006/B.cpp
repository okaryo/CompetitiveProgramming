#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  int m = n + n - 1;
  vector<string> s(l + 1);
  cin.ignore();
  for (int i = 0; i < l + 1; i ++) getline(cin, s[i]);

  int ans;
  for (int i = 0; i < m; i ++) {
    if (s[l][i] == 'o') ans = i;
  }

  for (int i = l - 1; i >= 0; i --) {
    if (ans - 1 > 0 && s[i][ans - 1] == '-') ans -= 2;
    else if (ans + 1 < m && s[i][ans + 1] == '-') ans += 2;
  }

  cout << (ans + 2) / 2 << endl;
}