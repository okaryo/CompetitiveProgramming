#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> ng(3);
  for (int i = 0; i < 3; i ++) {
    cin >> ng[i];
    if (n == ng[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  for (int i = 0; i < 100; i ++) {
    if (n - 3 != ng[0] && n-3 != ng[1] && n-3 != ng[2]) n -= 3;
    else if (n - 2 != ng[0] && n-2 != ng[1] && n-2 != ng[2]) n -= 2;
    else if (n - 1 != ng[0] && n-1 != ng[1] && n-1 != ng[2]) n --;
    else {
      cout << "NO" << endl;
      return 0;
    }
  }

  if (n <= 0) {
    cout << "YES" << endl;
    return 0;
  } else {
    cout << "NO" << endl;
    return 0;
  }
}
