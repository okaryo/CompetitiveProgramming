#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  string s; cin >> s;
  string x = "", y = "";
  int cnt = 0;
  rep(i, n) {
    if (s[i] == '(') cnt ++;
    else if (s[i] == ')' && cnt > 0) {
      cnt --;
    } else {
      x += '(';
    }
  }
  rep(i, cnt) y += ')';
  cout << x + s + y << endl;
}