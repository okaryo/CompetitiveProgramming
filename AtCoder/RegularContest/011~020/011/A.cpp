#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, N;
  cin >> n >> m >> N;

  int ans = N;
  int r;
  while (N >= n) {
    r = N % n;
    ans += (N / n) * m;
    N = (N / n) * m + r;
  }

  cout << ans << endl;
}
