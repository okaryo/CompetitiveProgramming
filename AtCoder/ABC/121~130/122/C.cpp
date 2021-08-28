#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, q;
  string s;
  cin >> n >> q >> s;
  vector<LL> a(n, 0);
  for (int i = 1; i < s.size(); i ++) {
    if (s[i] == 'C' && s[i-1] == 'A') a[i] = a[i-1] + 1;
    else a[i] = a[i-1];
  }

  int l, r;
  for (int i = 0; i < q; i ++) {
    cin >> l >> r;
    l --, r --;
    cout << a[r] - a[l] << endl;
  }
}