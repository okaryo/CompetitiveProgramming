#include <bits/stdc++.h>
using namespace std;

int N = 1000001;

int main() {
  int n; cin >> n;
  vector<int> S(N);
  for (int i = 0; i < n; i ++) {
    int a, b;
    cin >> a >> b;
    S[a] ++;
    S[b+1] --;
  }

  int ans = S[0];
  for (int i = 1; i <= N; i ++) {
    S[i] += S[i-1];
    ans = max(ans, S[i]);
  }

  cout << ans << endl;
}
