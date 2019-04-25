#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<string> day = {
    "Friday", "Thursday", "Wednesday", "Tuesday", "Monday"
  };

  int ans = 0;
  for (int i = 0; i < 5; i ++) {
    if (s == day.at(i)) ans = i + 1;
  }

  cout << ans << endl;
}
