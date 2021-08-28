#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0;
  vector<int> a(5);
  for (int i = 0; i < 5; i ++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  vector<int> b(0);
  for (int i = 0; i < 4; i ++) {
    for (int j = i + 1; j < 5; j ++) {
      int tmp = sum - (a.at(i) + a.at(j));
      b.push_back(tmp);
    }
  }
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());
  int ans = b.at(2);

  cout << ans << endl;
}
