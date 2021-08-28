#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  string s; cin >> s;
  for (int i = 0; i < s.size(); i ++) {
    char t = s[i] + n;
    if (t > 'Z') t -= 26;
    s[i] = t;
  }

  cout << s << endl;
}