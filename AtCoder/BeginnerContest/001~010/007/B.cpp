#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;

  if (a.size() >= 2 || a != "a") {
    cout << 'a' << endl;
  } else {
    cout << -1 << endl;
  }
}
