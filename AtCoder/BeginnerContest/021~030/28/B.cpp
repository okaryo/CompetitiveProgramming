#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> a = {'A', 'B', 'C', 'D', 'E', 'F'};

  for (int i = 0; i <= 5; i ++) {
    int cnt = 0;
    for (int j = 0; j < s.size(); j ++) {
      if (a.at(i) == s.at(j)) {
        cnt ++;
      }
    }
    if (i != 5) {
      cout << cnt << " ";
    } else {
      cout << cnt;
    }
  }
  cout << endl;
}
