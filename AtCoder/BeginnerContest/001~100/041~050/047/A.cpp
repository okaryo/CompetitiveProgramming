#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> vec = {a, b, c};
  sort(vec.begin(), vec.end());

  if (vec.at(0) + vec.at(1) == vec.at(2)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
