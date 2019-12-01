#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n;
  string s;
  cin >> n >> s;

  if (n % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }

  int m = n / 2;
  if (s.substr(0, m) == s.substr(m, m)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}