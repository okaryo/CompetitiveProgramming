#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < n; i ++) {
    cout << s[i] << t[i];
  }
  cout << endl;
}