#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> vec(26);

  if (s.size() == 26) {
    for (int i = 25; i > 0; i --) {
      vec.at(s.at(i) - 'a') ++;
      if (s.at(i) > s.at(i - 1)) {
        for (int j = s.at(i - 1) - 'a' + 1; j < 26; j ++) {
          if (vec.at(j)) {
            cout << s.substr(0, i - 1) << char(j + 'a') << endl;
            return 0;
          }
        }
      }
    }
    cout << -1 << endl;
    return 0;

  } else {
    for (int i = 0; i < s.size(); i ++) {
      vec.at(s.at(i) - 'a') ++;
    }
    for (int i = 0; i < 26; i ++) {
      if (!vec.at(i)) {
        cout << s << char(i + 'a') << endl;
        return 0;
      }
    }
  }
}
