#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
  int n, w;
  cin >> n >> w;
  pair<int, int> p[n];
  for (int i = 0; i <= n; i ++) cin >> p[i].first >> p[i].second;
  sort(p, p+n);

  LL DP[w+1];
  for (int i = 0; i <= w; i ++) DP[i] = 0;
  
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j + p[i].first <= w; j ++) {
      DP[j + p[i].first] = max(DP[j + p[i].first], DP[j] + p[i].second);
    }
  }

  cout << DP[w] << endl;
}
