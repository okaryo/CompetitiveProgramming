#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> x = {a, b, c};
  sort(x.begin(), x.end());

  if (x.at(0) == 5 && x.at(1) == 5 && x.at(2) == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
