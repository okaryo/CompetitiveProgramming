#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  int count = 1;
  int sum = y + (z * 2);
  while (x - sum >= y + z) {
    sum += y + z;
    count ++;
  }
  cout << count << endl;
}
