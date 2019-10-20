#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  if ((n.at(0) == n.at(1) && n.at(1) == n.at(2)) || (n.at(1) == n.at(2) && n.at(2) == n.at(3))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
