#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> num(3);
  int k;
  cin >> num.at(0) >> num.at(1) >> num.at(2) >> k;
  sort(num.begin(), num.end());

  int i = 0;
  while (i < k) {
    num.at(2) *= 2;
    i ++;
  }
  int ans = num.at(0) + num.at(1) + num.at(2);

  cout << ans << endl;
}
