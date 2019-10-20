#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans = "YES";
  int i = s.size();
  string dream, erase, dreamer, eraser;
  while (i > 0) {
    dream = s.substr(i - 5, 5);
    erase = s.substr(i - 5, 5);
    if (i >= 7) dreamer = s.substr(i - 7, 7);
    if (i >= 6) eraser  = s.substr(i - 6, 6);
    if (dream == "dream" || erase == "erase") i -= 5;
    else if (dreamer == "dreamer") i -= 7;
    else if (eraser == "eraser") i -= 6;
    else {
      ans = "NO";
      break;
    }
  }

  cout << ans << endl;
}
