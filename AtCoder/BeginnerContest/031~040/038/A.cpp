#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int x = s.size() - 1;

  if (s.at(x) == 'T') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
