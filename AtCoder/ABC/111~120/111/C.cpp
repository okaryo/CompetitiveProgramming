#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int max_n = 100000;
  int n = N / 2;
  pair<int, int> odd[max_n];
  pair<int, int> even[max_n];
  for (int i = 0; i < n; i ++) {
    int o, e;
    cin >> o >> e;
    odd[o].first ++;
    even[e].first ++;
    odd[o].second = o;
    even[e].second = e;
  }

  sort(odd, odd + max_n);
  reverse(odd, odd + max_n);
  sort(even, even + max_n);
  reverse(even, even + max_n);
  int ans;
  if (odd[0].second == even[0].second) {
    int a = (n - odd[0].first) + (n - even[1].first);
    int b = (n - odd[1].first) + (n - even[0].first);
    ans = min(a, b);
  } else {
    ans = (n - odd[0].first) + (n - even[0].first);
  }

  cout << ans << endl;
}
