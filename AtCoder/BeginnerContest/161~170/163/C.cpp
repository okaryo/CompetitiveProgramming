#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 1; i < n; i ++) {
    int t; cin >> t;
    t --;
    a[t] ++;
  }

  for (int i = 0; i < n; i ++) {
    cout << a[i] << endl;
  }
}
