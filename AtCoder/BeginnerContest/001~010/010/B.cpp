#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    while (a.at(i) % 2 == 0 || a.at(i) % 3 == 2) {
      cnt ++;
      a.at(i) --;
    }
  }

  cout << cnt << endl;
}
