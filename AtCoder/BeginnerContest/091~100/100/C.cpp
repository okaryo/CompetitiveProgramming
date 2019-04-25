#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int count = 0;
  for (int i = 0; i < n; i ++) {
    if (a.at(i) % 2 == 0) {
      while (a.at(i) > 1 && a.at(i) % 2 == 0) {
        count ++;
        a.at(i) /= 2;
      }
    }
  }

  cout << count << endl;
}
