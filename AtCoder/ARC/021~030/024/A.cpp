#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> A(101), B(101);
  for (int i = 0; i < a; i ++) {
    int t; cin >> t;
    A[t] ++;
  }
  for (int i = 0; i < b; i ++) {
    int t; cin >> t;
    B[t] ++;
  }

  int ans = 0;
  for (int i = 1; i <= 100; i ++) {
    ans += min(A[i], B[i]);
  }

  cout << ans << endl;
}
