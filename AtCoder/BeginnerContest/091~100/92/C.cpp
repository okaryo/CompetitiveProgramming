#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n+2);
  int sum = 0;
  for (int i = 1; i <= n+1; i ++) {
    cin >> a[i];
    sum += abs(a[i] - a[i-1]);
  }

  int tmp;
  for (int i = 1; i <= n; i ++) {
    tmp = sum - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) + abs(a[i+1] - a[i-1]);
    cout << tmp << endl;
  }
}
