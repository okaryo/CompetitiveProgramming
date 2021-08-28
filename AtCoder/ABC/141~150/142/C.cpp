#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> ans(n);
  int index = 1;
  rep(i, n) {
    cin >> a[i];
    a[i] --;
    ans[a[i]] = index;
    index ++;
  }

  rep(i, n) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}