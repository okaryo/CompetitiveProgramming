#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  int maxa = 0, maxb = 0, maxc = 0;
  for (int i = 0; i < n; i ++) {
    vector<int> a(3);
    for (int i = 0; i < 3; i ++) cin >> a[i];
    sort(a.begin(), a.end());
    maxa = max(maxa, a[0]), maxb = max(maxb, a[1]), maxc = max(maxc, a[2]);
  }
  cout << maxa * maxb * maxc << endl;
}