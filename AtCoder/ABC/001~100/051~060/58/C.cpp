#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  pair<int, int> b[26];
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < a.at(i).size(); j ++) {
      b[a.at(i).at(j) - 'a'].first ++;
    }
    for (int j = 0; j < 26; j ++) {
      if (i == 0) {
        b[j].second = b[j].first;
      } else {
        b[j].second = min(b[j].first, b[j].second);
      }
      b[j].first = 0;
    }
  }

  for (int i = 0; i < 26; i ++) {
    for (int j = 0; j < b[i].second; j ++) {
      cout << char(i + 'a');
    }
  }
  cout << endl;
}
