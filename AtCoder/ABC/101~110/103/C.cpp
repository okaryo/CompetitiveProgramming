#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  LL sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    sum += a.at(i) - 1;
  }

  cout << sum << endl;
}
