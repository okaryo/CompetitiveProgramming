#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < n; i ++) {
    for (int j = n - 1; j >= 0; j --) {
      cout << a.at(j).at(i);
    }
    cout << endl;
  }
}
