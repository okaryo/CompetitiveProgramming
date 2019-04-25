#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int i = 0;
  while (a.at(i) == a.at(i + 1)) {
    i ++;
  }
  cout << a.at(i + 1) << endl;
}
