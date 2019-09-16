#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, k, q;
  cin >> n >> k >> q;
  vector<LL> a(q);
  vector<LL> cnt(n, 0);
  rep(i, q) {
    cin >> a[i];
    a[i] --;
    cnt[a[i]] ++;
  }

  rep(i, n) {
    if (k - q + cnt[i] > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  
}