#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n;
  string s;
  cin >> n >> s;
  for (int i = 2; i <= 10; i ++) {
    LL t = n;
    string a = "";
    while (t > 0) {
      a = char(t % i + '0') + a;
      t /= i;
    }
    if (a == s) {
      cout << i << endl;
      return 0;
    }
  }
}