#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  if (s[2] == s[3] && s[4] == s[5]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
