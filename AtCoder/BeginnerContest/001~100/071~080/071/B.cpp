#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<bool> a(26);
  for (int i = 0; i < s.size(); i ++) {
    a.at(s.at(i) - 'a') = true;
  }

  for (int i = 0; i < 26; i ++) {
    if (!a.at(i)) {
      char ans = i + 'a';
      cout << ans << endl;
      return 0;
    }
  }

  cout << "None" << endl;
}
