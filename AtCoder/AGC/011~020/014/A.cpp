#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int ans = 0;
  if (a%2==0 && b%2==0 && c%2==0) {
    if (a == b && b == c) ans = -1;
    else {
      ans = 1;
      int A = a, B = b, C = c;
      while(true) {
        A = (b + c) / 2;
        B = (a + c) / 2;
        C = (a + b) / 2;
        if (A%2==1 || B%2==1 || C%2==1) break;
        else ans ++, a = A, B = b, c = C;
      }
    }
  } else ans = 0;

  cout << ans << endl;
}
