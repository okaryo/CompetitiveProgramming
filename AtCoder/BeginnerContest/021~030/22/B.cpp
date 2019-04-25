#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  int cnt = 0;
  for (int i = 1; i < n; i ++) {
    if (a.at(i) == a.at(i - 1)) {
      cnt ++;
    }
  }

  cout << cnt << endl;
}
