#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n; cin >> n;
  vector<int> honest(n);
  vector<int> not_honest(n);
  for (int i = 0; i < n; i ++) {
    int t; cin >> t;
    for (int j = 0; j < t; j ++) {
      int a, b;
      cin >> a >> b;
      a --;
      if (b) honest[a] ++;
      else not_honest[a] ++; 
    }
  }

  int t = 0, sum = 0;
  for (int i = 0; i < n; i ++) {
    if (honest[i] && not_honest[i]) {
      sum ++;
      t = max(t, min(honest[i], not_honest[i]));
    }
  }

  cout << n - max(t, sum) << endl;
}
