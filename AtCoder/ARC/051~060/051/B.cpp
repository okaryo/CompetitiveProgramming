#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int k; cin >> k;
  int a = 2, b = 1;

  for (int i = 0; i < k - 1; i ++) {
    int t = a;
    a += b;
    b = t;
  }
  cout << a << " " << b << endl;
}