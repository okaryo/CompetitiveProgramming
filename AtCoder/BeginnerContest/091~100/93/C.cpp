#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> abc(3);
  for (int i = 0; i < 3; i ++) {
    cin >> abc.at(i);
  }

  sort(abc.begin(), abc.end());
  int ans = abc.at(2) - abc.at(1);
  abc.at(0) += ans;
  if ((abc.at(2) - abc.at(0)) % 2 == 0) {
    ans += (abc.at(2) - abc.at(0)) / 2;
  } else {
    ans += (abc.at(2) - abc.at(0)) / 2 + 2;
  }

  cout << ans << endl;
}
