#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  if (a.size() > b.size()) {
    cout << "GREATER" << endl;
    return 0;
  } else if (a.size() < b.size()) {
    cout << "LESS" << endl;
    return 0;
  } else {
    for (int i = 0; i < a.size(); i ++) {
      if (a.at(i) == b.at(i)) {
        continue;
      } else if (a.at(i) > b.at(i)) {
        cout << "GREATER" << endl;
        return 0;
      } else if (a.at(i) < b.at(i)) {
        cout << "LESS" << endl;
        return 0;
      }
    }
  }

  cout << "EQUAL" << endl;
}
