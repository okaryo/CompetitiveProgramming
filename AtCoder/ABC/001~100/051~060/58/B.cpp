#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int i = 0;
  while (i < a.size()) {
    cout << a.at(i);
    if (i < b.size()) {
      cout << b.at(i);
    }
    i ++;
  }
  cout << endl;
}
