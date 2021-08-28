#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h * 2);
  for (int i = 0; i < h * 2; i += 2) {
    cin >> a.at(i);
    a.at(i + 1) = a.at(i);
  }

  for (int i = 0; i < h * 2; i ++) {
    cout << a.at(i) << endl;
  }
}
