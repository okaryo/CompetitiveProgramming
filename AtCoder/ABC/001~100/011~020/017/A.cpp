#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> x(6);
  for (int i = 0; i < 6; i ++) {
    cin >> x.at(i);
  }

  int a = x.at(0) * x.at(1) / 10;
  int b = x.at(2) * x.at(3) / 10;
  int c = x.at(4) * x.at(5) / 10;
  cout << a + b + c << endl;
}
