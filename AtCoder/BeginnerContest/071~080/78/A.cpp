#include <bits/stdc++.h>
using namespace std;

int num(char x) {
  int num = 0;
  if (x == 'A') {
    num = 1;
  } else if (x == 'B') {
    num = 2;
  } else if (x == 'C') {
    num = 3;
  } else if (x == 'D') {
    num = 4;
  } else if (x == 'E') {
    num = 5;
  } else {
    num = 6;
  }
  return num;
}

int main() {
  char x, y;
  cin >> x >> y;

  if (num(x) > num(y)) {
    cout << '>' << endl;
  } else if (num(x) < num(y)) {
    cout << '<' << endl;
  } else {
    cout << '=' << endl;
  }
}
