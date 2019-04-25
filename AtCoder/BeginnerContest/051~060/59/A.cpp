#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  a.at(0) = toupper(a.at(0));
  b.at(0) = toupper(b.at(0));
  c.at(0) = toupper(c.at(0));

  cout << a.at(0) << b.at(0) << c.at(0) << endl;
}
