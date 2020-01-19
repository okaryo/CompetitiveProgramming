#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  cout << ceil(double(n) / max(h, w)) << endl;
}