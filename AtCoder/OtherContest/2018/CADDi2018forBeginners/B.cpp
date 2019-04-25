#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, h, w;
  cin >> n >> h >> w;
  vector<int> a(n);
  vector<int> b(n);
  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i) >> b.at(i);
    if (a.at(i) >= h && b.at(i) >= w) {
      cnt ++;
    }
  }

  cout << cnt << endl;
}
