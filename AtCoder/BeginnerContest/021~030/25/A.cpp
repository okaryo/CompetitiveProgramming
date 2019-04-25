#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  int x = (n - 1) / 5;
  int y = (n - 1) % 5;

  cout << s.at(x) << s.at(y) << endl;
}
