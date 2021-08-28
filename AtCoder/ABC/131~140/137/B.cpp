#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int k, x;
  cin >> k >> x;
  int minv = max(-1000000, x - k + 1);
  int maxv = min(1000000, x + k - 1);
  for (int i = minv; i <= maxv; i ++) {
    if (i != minv) cout << " ";
    cout << i;
  }
  cout << endl;
}