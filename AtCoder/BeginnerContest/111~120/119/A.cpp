#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;

  string ans;
  if (stoi(s.substr(0, 4)) <= 2018) {
    ans = "Heisei";
  } else if (s.substr(0, 4) == "2019" && stoi(s.substr(5, 2)) <= 4) {
    ans = "Heisei";
  } else ans = "TBD";

  cout << ans << endl;
}
