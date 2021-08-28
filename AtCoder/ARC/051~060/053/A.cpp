#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int ans = h * w * 2 - (h + w);

  cout << ans << endl;
}
