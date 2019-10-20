#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  string a = "", b = "";
  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    if (s[i] == '(') cnt ++;
    else if (s[i] == ')' && cnt > 0) {
      cnt --;
    } else if (s[i] == ')' && cnt == 0) {
      a += '(';
    }
  }
  if (cnt > 0) {
    for (int i = 0; i < cnt; i ++) b += ')';
  }

  cout << a + s + b << endl;
}