#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> vec = {0, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  string ans;
  if (a == b) {
    ans = "Draw";
  } else if (vec.at(a) > vec.at(b)) {
    ans = "Alice";
  } else {
    ans = "Bob";
  }

  cout << ans << endl;
}
