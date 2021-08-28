#include <bits/stdc++.h>
using namespace std;

int main() {
  double n, k;
  cin >> n >> k;

  int i = ceil((n - 1) / 2);
  if (i >= k) cout << "YES";
  else cout << "NO";
  cout << endl;
}
