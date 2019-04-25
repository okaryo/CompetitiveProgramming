#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int sum = 0;
  for (int i = 0; i < n; i ++) {
    int a, b;
    cin >> a >> b;
    sum += a * b;
  }

  int ans = sum * 1.05;
  cout << ans << endl;
}
