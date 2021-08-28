#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  LL n, m;
  cin >> n >> m;
  vector<LL> a(n);
  LL sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }

  priority_queue<LL> pq;
  rep(i, n) {
    while (a[i] > 0) {
      pq.push(a[i] - (a[i] / 2));
      a[i] /= 2;
    }
  }

  rep(i, m) {
    LL t = pq.top();
    sum -= t;
    pq.pop();
  }

  cout << max((LL)0, sum) << endl;
}