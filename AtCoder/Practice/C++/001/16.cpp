#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL solve(LL x) {
  if (x % 2 == 0) return x / 2;
  else return x * 3 + 1;
}

int main() {
  LL p; cin >> p;
  LL a = 1789997546303;
  for (int i = 0; i < 1000 - p; i ++) {
    a = solve(a);
  }
  cout << a << endl;
}