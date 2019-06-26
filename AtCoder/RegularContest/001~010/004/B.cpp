#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  int maxv = 0;
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
    maxv += a[i];
  }
  
  int minv = 0;
  sort(a.begin(), a.end());
  if (a.back() * 2 > maxv) minv = a.back() * 2 - maxv;

  cout << maxv << endl << minv << endl;
}