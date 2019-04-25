#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i ++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int Alice = 0;
  int Bob = 0;
  for (int i = 0; i < N; i += 2) {
    Alice += a.at(i);
  }
  for (int i = 1; i < N; i += 2) {
    Bob += a.at(i);
  }
  int ans = Alice - Bob;

  cout << ans << endl;
}
