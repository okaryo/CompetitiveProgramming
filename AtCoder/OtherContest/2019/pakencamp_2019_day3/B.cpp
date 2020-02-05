#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  int b = 0, w = 0;
  for (int i = 0; i < n; i ++) {
    string t; cin >> t;
    if (t == "white") w ++;
    else b ++;
  }

  if (w > b) cout << "white" << endl;
  else cout << "black" << endl;
}
