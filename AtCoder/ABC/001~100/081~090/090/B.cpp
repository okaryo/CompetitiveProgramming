#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int count = 0;

  for (int i = a; i <= b; i ++) {
    int w = i / 10000;
    int x = i % 10;
    int y = i / 1000 % 10;
    int z = i / 10 % 10;
    if (w == x && y == z) {
      count ++;
    }
  }
  cout << count << endl;
}
