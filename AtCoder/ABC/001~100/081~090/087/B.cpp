#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  vector<int> num = {a, b, c};

  int count = 0;
  for (int i = 0; i <= a; i ++) {
    for (int j = 0; j <= b; j ++) {
      for (int k = 0; k <= c; k ++) {
        int sum = 500 * i + 100 * j + 50 * k;
        if (sum == x) {
          count ++;
        }
      }
    }
  }

  cout << count << endl;
}
