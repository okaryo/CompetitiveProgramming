#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  int  ans = 0;
  for (int i = 0; i < n; i ++) {
    int cnt = 0;
    for (int j = 0; j < n; j ++) {
      if (a.at(i) == a.at(j)) {
        cnt ++;
      }
    }
    if (cnt >= ans) {
      ans = i;
    }
  }
  cout << a.at(ans) << endl;
}
