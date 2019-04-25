#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;
  for (int i = 0; i < 4; i ++) {
    if (s.at(i) == '+') {
      count ++;
    } else {
      count --;
    }
  }

  cout << count << endl;
}
