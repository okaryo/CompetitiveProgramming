#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> a(3);
  cin >> a.at(0) >> a.at(1) >> a.at(2);

  string ans = "ABC";
  int tmp = 0;
  while (true) {
    if (a.at(tmp).size() == 0) {
      cout << ans.at(tmp) << endl;
      return 0;
    }

    char head = a.at(tmp).at(0);
    a.at(tmp).erase(a.at(tmp).begin());
    if (head == 'a') {
      tmp = 0;
    } else if (head == 'b') {
      tmp = 1;
    } else {
      tmp = 2;
    }
  }
}
