#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  int x, y;
  cin >> x >> y;
  int n = s.size();

  vector<int> a;
  int f_sum = 0;
  rep(i, n) {
    if (s[i] == 'T') {
      a.push_back(f_sum);
      f_sum = 0;
    } else {
      f_sum ++;
    }
  }
  a.push_back(f_sum);
}