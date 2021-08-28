#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.size() % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }

  sort(s.begin(), s.end());
  int cnt = 1;
  for (int i = 1; i < s.size(); i ++) {
    if (s.at(i) == s.at(i - 1)) {
      cnt ++;
    } else if (s.at(i) != s.at(i - 1) && cnt % 2 == 0) {
      cnt = 1;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
