#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i ++) cin >> s[i];

  vector<string> ans;
  for (int i = 0; i < n; i ++) {
    string x = "";
    for (int j = 0; j < s[i].size(); j ++) {
      char t = s[i][j];
      if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u') continue;
      if (t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U') continue;
      if (t == ',' || t =='.') continue;

      if (t < 'a') t += 32;
      if (t == 'b' || t == 'c') x += '1';
      if (t == 'd' || t == 'w') x += '2';
      if (t == 't' || t == 'j') x += '3';
      if (t == 'f' || t == 'q') x += '4';
      if (t == 'l' || t == 'v') x += '5';
      if (t == 's' || t == 'x') x += '6';
      if (t == 'p' || t == 'm') x += '7';
      if (t == 'h' || t == 'k') x += '8';
      if (t == 'n' || t == 'g') x += '9';
      if (t == 'z' || t == 'r') x += '0';
    }
    if (x != "") ans.push_back(x);
  }

  for (int i = 0; i < ans.size(); i ++) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}