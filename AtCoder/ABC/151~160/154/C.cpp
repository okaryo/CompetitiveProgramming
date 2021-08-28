#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  set<int> s;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    s.insert(t);
  }

  if (n == s.size()) cout << "YES" << endl;
  else cout << "NO" << endl;
}
