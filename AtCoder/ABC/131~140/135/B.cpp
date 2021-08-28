#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  int cnt = 0;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    if (a[i] != i + 1) cnt ++;
  }

  if (cnt <= 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}