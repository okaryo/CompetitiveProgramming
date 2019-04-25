#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(4);
  for (int i = 0; i < 6; i ++) {
    int t;
    cin >> t;
    a.at(t - 1) ++;
  }

  sort(a.begin(), a.end());
  if (a[0]==1 && a[1]==1 && a[2]==2 && a[3]==2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
