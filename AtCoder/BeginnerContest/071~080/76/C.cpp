#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.size() < t.size()) {
    cout << "UNRESTORABLE" << endl;
    return 0;
  }

  int a;
  vector<string> x;
  for (int i = 0; i <= s.size() - t.size(); i ++) {
    if (s[i] == t[0] || s[i] == '?') {
      a = 1;
      for (int j = 1; j < t.size(); j ++) {
        if (s[i+j] != '?' && s[i+j] != t[j]) a = 0;
      }
      if (a) {
        string y = "";
        for (int j = 0; j < s.size(); j ++) {
          if (j == i) {
            y += t;
            j += t.size() - 1;
          }
          else if (s[j] == '?') y += 'a';
          else y += s[j];
        }
        x.push_back(y);
      }
    }
  }
  if (!x.empty()) {
    sort(x.begin(), x.end());
    cout << x[0] << endl;
    return 0;
  }

  cout << "UNRESTORABLE" << endl;
}
