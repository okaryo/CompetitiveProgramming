#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<string, int>> sp(n), nsp;
  for (int i = 0; i < n; i ++) {
    string s;
    int t;
    cin >> s >> t;
    t *= -1;
    sp[i] = make_pair(s, t);
  }

  nsp = sp;
  sort(nsp.begin(), nsp.end());
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < n; j ++) {
      if (sp[j] == nsp[i]) {
        cout << j + 1 << endl;
        break;
      }
    }
  }
}
