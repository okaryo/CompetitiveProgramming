#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL a, b, n;
  cin >> a >> b >> n;
  LL x = min(b - 1, n);


  cout << (a * x) / b - x / b << endl;
}
