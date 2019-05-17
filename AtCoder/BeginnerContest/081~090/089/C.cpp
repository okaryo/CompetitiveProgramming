#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  vector<LL> initial(5);
  for (int i = 0; i < n; i ++) {
    cin >> s;
    if (s.at(0) == 'M') initial.at(0) ++;
    else if (s.at(0) == 'A') initial.at(1) ++;
    else if (s.at(0) == 'R') initial.at(2) ++;
    else if (s.at(0) == 'C') initial.at(3) ++;
    else if (s.at(0) == 'H') initial.at(4) ++;
  }

  LL ans = 0;
  int P[10] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
  int Q[10] = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
  int R[10] = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};
  for (int i = 0; i < 10; i ++) {
    ans += initial.at(P[i]) * initial.at(Q[i]) * initial.at(R[i]);
  }

  cout << ans << endl;
}
