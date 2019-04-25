#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL calc(LL x) {
  if (x % 4 == 0) return x;
  if (x % 4 == 1) return 1;
  if (x % 4 == 2) return x + 1;
  if (x % 4 == 3) return 0;
}

int main() {
  LL A, B;
  cin >> A >> B;

  cout << (calc(A-1) ^ calc(B)) << endl;
}
