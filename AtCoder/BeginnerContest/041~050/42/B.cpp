#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<string> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  for (int i = 0; i < n; i ++) {
    cout << a.at(i);
  }
  cout << endl;
}
