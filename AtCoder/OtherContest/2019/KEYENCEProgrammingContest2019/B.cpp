#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i ++) {
    for (int j = 0; j <= s.size() - 7; j ++) {
      string tmp = s;
      tmp.erase(i, j);
      if (tmp == "keyence") {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
}
