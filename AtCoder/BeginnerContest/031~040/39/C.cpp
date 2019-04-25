#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int j;
  vector<string> ans = {"Fa", "Mi", "Re#", "Re", "Do#", "Do", "Si", "La#", "La", "So#", "So", "Fa#"};
  for (int i = 0; i < 13; i ++) {
    string tmp = s.substr(i, 7);
    if (tmp == "WBWBWBW") {
      j = (i % 12);
      break;
    }
  }

  cout << ans.at(j) << endl;
}
