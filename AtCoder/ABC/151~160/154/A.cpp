#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  map<string, int> mp;
  string s,t;
  cin >> s >> t;
  int a, b;
  cin >> a >> b;
  string u; cin >> u;
  mp[s] = a, mp[t] = b;
  mp[u] --;
  cout << mp[s] << " " << mp[t] << endl;
}
