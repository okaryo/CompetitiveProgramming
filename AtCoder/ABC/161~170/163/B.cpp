#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  int t;
  rep(i, m) {
    cin >> t;
    sum += t;
  }

  cout << max(-1, n - sum) << endl;
}
