#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  string ans = "No";
  if (a == b && b != c) ans = "Yes";
  if (a == c && a != b) ans = "Yes";
  if (b == c && a != b) ans = "Yes";
  cout << ans << endl;
}
