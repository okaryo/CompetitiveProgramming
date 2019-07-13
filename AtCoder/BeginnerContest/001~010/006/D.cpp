#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int n;
vector<int> a;

int lis() {
  vector<int> length;
  length.push_back(a[0]);

  for (int i = 1; i < n; i ++) {
    if (length.back() < a[i]) {
      length.push_back(a[i]);
    } else {
      *lower_bound(length.begin(), length.end(), a[i]) = a[i];
    }
  }

  return length.size();
}

int main() {
  cin >> n;
  a = vector<int>(n);
  int ans = 0, maxv = 0;
  for (int i = 0; i < n; i ++) cin >> a[i];

  cout << n - lis() << endl;
}