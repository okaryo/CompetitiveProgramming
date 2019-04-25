#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, d, k;
  cin >> n >> d >> k;
  long long l[10010], r[10010];
  for (int i = 0; i < d; i ++) cin >> l[i] >> r[i];

  for (int i = 0; i < k; i ++) {
    long long s, t; cin >> s >> t;
    for (int j = 0; j < d; j ++) {
      if (s >= l[j] && s <= r[j] && t >= l[j] && t <= r[j]) {
        cout << j+1 << endl;
        break;
      } else if (s >= l[j] && s <= r[j] && s > t) {
        s = l[j];
      } else if (s >= l[j] && s <= r[j] && s < t) {
        s = r[j];
      }
    }
  }
}
