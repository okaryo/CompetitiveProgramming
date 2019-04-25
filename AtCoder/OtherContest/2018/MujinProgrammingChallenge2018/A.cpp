#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans = "No";
  if (s.substr(0, 5) == "MUJIN") ans = "Yes";

  cout << ans << endl;
}
