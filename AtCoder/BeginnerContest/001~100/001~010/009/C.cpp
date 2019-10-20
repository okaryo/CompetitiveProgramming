#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  vector<int> cnt(26);
  for (int i = 0; i < n; i ++) cnt[s[i] - 'a'] ++;

  string ans = "";
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < 26; j ++) {
      if (cnt[j]) {
        vector<int> tmp = cnt;
        tmp[j] --;
        int c = k;
        for (int l = 0; l < ans.size(); l ++) {
          if (ans[l] != s[l]) c --;
        }

        if (j != s[i] - 'a') c --;
        
        for (int l = i + 1; l < n; l ++) {
          if (tmp[s[l] - 'a'] == 0) c --;
          else tmp[s[l] - 'a'] --;
        }
        if (c >= 0) {
          ans += (char)(j + 'a');
          cnt[j] --;
          break;
        }
      }
    }
  }

  cout << ans << endl;
}