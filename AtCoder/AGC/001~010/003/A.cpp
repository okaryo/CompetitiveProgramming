#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<bool> a(4);
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'N') {
      a.at(0) = true;
    } else if (s.at(i) == 'S') {
      a.at(1) = true;
    } else if (s.at(i) == 'W') {
      a.at(2) = true;
    } else {
      a.at(3) = true;
    }
  }

  string ans;
  if ((a.at(0) && a.at(1)) && (a.at(2) && a.at(3))) {
    ans = "Yes";
  } else if ((a.at(0) && a.at(1)) && (!a.at(2) && !a.at(3))) {
    ans = "Yes";
  } else if ((!a.at(0) && !a.at(1)) && (a.at(2) && a.at(3))) {
    ans = "Yes";
  } else {
    ans = "No";
  }

  cout << ans << endl;
}
