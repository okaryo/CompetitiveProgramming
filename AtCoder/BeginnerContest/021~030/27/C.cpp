#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n;
  cin >> n;

  LL depth = 0;
  for (LL i = n; i > 0; i /= 2) depth ++;

  LL x = 1;
  while (true) {
    x = 2 * x + depth % 2;
    if (x > n) {
      cout << "Aoki" << endl;
      break;
    }

    x = 2 * x + (depth + 1) % 2;
    if (x > n) {
      cout << "Takahashi" << endl;;
      break;
    }
  }
}
