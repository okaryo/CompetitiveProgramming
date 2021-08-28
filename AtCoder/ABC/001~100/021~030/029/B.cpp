#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> a(12);
  for (int i = 0; i < 12; i ++) {
    cin >> a.at(i);
  }

  int cnt = 0;
  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < a.at(i).size(); j ++) {
      if (a.at(i).at(j) == 'r') {
        cnt ++;
        break;
      }
    }
  }
  cout << cnt << endl;
}
