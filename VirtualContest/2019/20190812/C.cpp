#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int n = s.size();

  int win_num = 0, lose_num = 0;
  int p_num = 0, g_num = 0;
  rep(i, n) {
    if (p_num == g_num) {
      g_num ++;
      if (s[i] == 'g') continue;
      else lose_num ++;
    } else {
      if (s[i] == 'g') {
        p_num ++;
        win_num ++;
      } else {
        p_num ++;
      }
    }
  }

  cout << win_num - lose_num << endl;
}