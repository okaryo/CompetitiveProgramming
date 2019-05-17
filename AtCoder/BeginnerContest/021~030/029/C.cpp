#include <bits/stdc++.h>
using namespace std;

void solve(int x, string s) {
  if (x == 0) {
    cout << s << endl;
  } else {
    for (char i = 'a'; i <= 'c'; i ++) {
      solve(x - 1, s + i);
    }
  }
}

int main() {
  int n;
  cin >> n;

  solve(n, "");
}
