#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int X, Y, Z, K;
  cin >> X >> Y >> Z >> K;
  vector<LL> a(X), b(Y), c(Z);
  for (int i = 0; i < X; i ++) cin >> a[i];
  for (int i = 0; i < Y; i ++) cin >> b[i];
  for (int i = 0; i < Z; i ++) cin >> c[i];

  vector<LL> ab;
  for (int i = 0; i < X; i ++) {
    for (int j = 0; j < Y; j ++) {
      ab.push_back(a[i] + b[j]);
    }
  }
  sort(ab.begin(), ab.end());
  reverse(ab.begin(), ab.end());

  vector<LL> abc;
  for (int i = 0; i < min(K, (int)ab.size()); i ++) {
    for (int j = 0; j < Z; j ++) {
      abc.push_back(ab[i] + c[j]);
    }
  }
  sort(abc.begin(), abc.end());
  reverse(abc.begin(), abc.end());

  for (int i = 0; i < K; i ++) {
    cout << abc[i] << endl;
  }
}