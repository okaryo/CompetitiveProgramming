#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int A = 0, B = 0, C = 0;
  for (int i = 0; i < n; i ++) {
    int tmp;
    cin >> tmp;
    if (tmp <= a) A ++;
    else if (tmp <= b) B ++;
    else C ++;
  }

  int ans = min(A, min(B, C));

  cout << ans << endl;
}
