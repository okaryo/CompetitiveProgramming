#include <bits/stdc++.h>
using namespace std;

bool serch(vector<int> a, int n, int key) {
  int i = 0;
  a.at(n) = key;
  while (a.at(i) != key) i ++;
  return i != n;
}

int main() {
  int i, n, q, key, sum = 0;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 0; i < n; i ++) cin >> a.at(i);

  cin >> q;
  for (int i = 0; i < q; i ++) {
    cin >> key;
    if (serch(a, n, key)) sum ++;
  }

  cout << sum << endl;
}
