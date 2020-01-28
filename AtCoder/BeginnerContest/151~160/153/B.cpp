#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, n;
  cin >> h >> n;
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    sum += t;
  }
  string ans = sum >= h ? "Yes" : "No";

  cout << ans << endl;
}