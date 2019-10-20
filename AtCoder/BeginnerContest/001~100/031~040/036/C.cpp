#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
    b.at(i) = a.at(i);
  }

  map<int, int> mp;
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  for (int i = 0; i < a.size(); i ++) {
    mp[a.at(i)] = i;
  }

  for (int i = 0; i < n; i ++) {
    cout << mp[b.at(i)] << endl;
  }
}
