#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  if (n.at(0) == '9' || n.at(1) == '9') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
