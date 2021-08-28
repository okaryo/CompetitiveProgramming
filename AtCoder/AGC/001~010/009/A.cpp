#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i) >> b.at(i);
  }

  LL count = 0;
  for (int i = n - 1; i >= 0; i --) {
    LL tmp = (b.at(i) - (count + a.at(i)) % b.at(i)) % b.at(i);
    count += tmp;
  }

  cout << count << endl;
}
