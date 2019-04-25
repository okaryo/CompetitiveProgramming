#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int a, b, c, d;
  cin >> s >> a >> b >> c >> d;

  vector<int> vec = {a, b, c, d, -1};
  int j = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (i == vec.at(j)) {
      cout << '"';
      j ++;
    }
    cout << s.at(i);
  }
  if (j == 3) cout << '"';
  cout << endl;
}
