#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int dif = b - a;
  int height = 0;
  for (int i = 1; i < dif; i ++) {
    height += i;
  }
  int depth = height - a;

  cout << depth << endl;
}
