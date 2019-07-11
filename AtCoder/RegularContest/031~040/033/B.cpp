#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  map<int, int> mp;
  for (int i = 0; i < a; i ++) {
    int t; cin >> t;
    mp[t] ++;
  }
  for (int i = 0; i < b; i ++) {
    int t; cin >> t;
    mp[t] ++;
  }
  
  int cnt = 0;
  for (auto i : mp) {
    if (i.second == 2) cnt ++;
  }
  cout << setprecision(15) << (double)cnt / mp.size() << endl;
}