#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  vector<int> vec = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};

  if (vec.at(x) == vec.at(y)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
