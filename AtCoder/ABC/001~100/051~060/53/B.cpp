#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int i = 0, j = s.size() - 1;

  while (true) {
    if (s.at(i) == 'A') {
      break;
    }
    i ++;
  }
  while (true) {
    if (s.at(j) == 'Z') {
      break;
    }
    j --;
  }

  cout << j - i + 1 << endl;
}
