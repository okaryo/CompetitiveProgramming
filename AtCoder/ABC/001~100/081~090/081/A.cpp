#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;

  int count = 0;
  int i = 0;
  while (i < 3) {
    if (x.at(i) == '1') {
      count ++;
    }
    i ++;
  }

  cout << count << endl;
}
