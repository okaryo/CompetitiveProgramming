#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> a(4);
  for (int i = 0; i < n; i ++) {
    a[s[i]-49] ++;
  }

  sort(a.begin(), a.end());

  cout << a[3] << " " << a[0] << endl;
}
