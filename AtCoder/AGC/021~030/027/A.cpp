#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());

  int count = 0;
  for (int i = 0; i < n; i ++) {
    if (i == n - 1 && x != a.at(n - 1)) {
      break;
    } else if (x >= a.at(i)) {
      x -= a.at(i);
      count ++;
    } else {
      break;
    }
  }

  cout << count << endl;
}
