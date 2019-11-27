#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s; cin >> s;
  string d[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  for (int i = 0; i < sizeof(d); i ++) {
    if (s == d[i]) {
      cout << 7 - i << endl;
    }
  }
}