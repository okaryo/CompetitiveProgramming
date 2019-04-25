#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<int> s_table(26, -1), t_table(26, -1);

  bool ans = true;
  for (int i = 0; i < s.size(); i ++) {
    int s_char = s[i] - 'a';
    int t_char = t[i] - 'a';

    if (s_table[s_char] != -1 && s_table[s_char] != t_char) {
      ans = false;
      break;
    }
    s_table[s_char] = t_char;
    if (t_table[t_char] != -1 && t_table[t_char] != s_char) {
      ans = false;
      break;
    }
    t_table[t_char] = s_char;
  }

  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
