#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int sum = 0;
  for (int i = 0; i < s.size(); i ++) {
    sum += s.at(i) - '0';
  }

  if (sum == 1) {
    cout << 10 << endl;
  } else {
    cout << sum << endl;
  }
}
