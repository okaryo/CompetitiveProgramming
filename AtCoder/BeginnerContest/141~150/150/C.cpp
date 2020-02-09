#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> p(n), q(n);
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];

  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    a[i] = i + 1;
  }

  int pc, qc, count = 0;
  do {
    if (p == a) pc = count;
    if (q == a) qc = count;
    count ++;
  } while (next_permutation(all(a)));

  cout << abs(pc - qc) << endl;
}
