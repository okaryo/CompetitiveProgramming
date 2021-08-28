#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = 0; i <= a; i ++) {
    for (int j = 0; j <= a; j ++) {
      int k = b - i - j;
      if (k >= 0 && k <= a) {
        cnt ++;
      }
    }
  }

  cout << cnt << endl;
}
