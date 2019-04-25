#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int price = 700;
  for (int i = 0; i < 3; i ++) {
    if (s.at(i) == 'o') {
      price += 100;
    }
  }

  cout << price << endl;
}
