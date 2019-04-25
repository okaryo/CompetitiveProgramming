#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;

  vector<string> vec;
  for (int i = 0; i < s.size(); i ++) {
    for (int j = 1; j <= k; j ++) {
      string tmp = s.substr(i, j);
      vec.push_back(tmp);
    }
  }
  sort(vec.begin(), vec.end());
  unique(vec.begin(), vec.end());
  string ans = vec.at(k - 1);

  cout << ans << endl;
}
