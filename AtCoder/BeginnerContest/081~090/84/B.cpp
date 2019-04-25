#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;

  int count = 0;
  if (s.at(a) == '-') {
    count ++;
  }
  for (int i = 0; i <= a + b; i ++) {
    if (i == a) {
      continue;
    }
    if (s.at(i) == '-') {
      count --;
      break;
    }
  }

  if (count == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
