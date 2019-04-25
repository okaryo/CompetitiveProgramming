#include <bits/stdc++.h>
using namespace std;

int binarySearch (vector<int> a, int n, int key) {
  int left = 0;
  int right = n;
  int mid;
  while (left < right) {
    mid = (left + right) / 2;
    if (key == a.at(mid)) return 1;
    if (key > a.at(mid)) left = mid + 1;
    else if (key < a.at(mid)) right = mid;
  }
  return 0;
}

int main() {
  int n, q, sum = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a.at(i);

  cin >> q;
  for (int i = 0; i < q; i ++) {
    int key; cin >> key;
    if (binarySearch(a, n, key)) sum ++;
  }

  cout << sum << endl;
}
