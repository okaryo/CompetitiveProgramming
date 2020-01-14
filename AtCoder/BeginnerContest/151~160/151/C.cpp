#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> sum(n, 0);
  vector<bool> check(n, false);
  int ok = 0, pena = 0;
  rep(i, m) {
    int p;
    string s;
    cin >> p >> s;
    p --;
    if (check[p]) {
      continue;
    } else {
      if (s == "AC") check[p] = true;
      else sum[p] ++;
    }
  }

  rep(i, n) {
    if (check[i]) {
      ok ++;
      pena += sum[i];
    }
  }

  cout << ok << " " << pena << endl;
}