#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

bool prime_check(int x) {
  for (int i = 2; i * i <= x; i ++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int n; cin >> n;
  vector<int> a;
  for (int i = 2; i <= 55555; i ++) {
    if (i % 5 == 1) {
      if (prime_check(i)) a.push_back(i);
    }
  }

  for (int i = 0; i < n; i ++) {
    if (i) cout << " ";
    cout << a[i];
  }
  cout << endl;
}