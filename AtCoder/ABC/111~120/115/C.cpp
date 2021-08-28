#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n, k;
  cin >> n >> k;
  vector<LL> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  LL def = 1000000000;
  for (int i = 0; i <= n - k; i ++) {
    LL tmp;
    for (int j = i; j < i + k; j ++) {
      tmp = a.at(i + k - 1) - a.at(i);
    }
    def = min(def, tmp);
  }

  cout << def << endl;
}
