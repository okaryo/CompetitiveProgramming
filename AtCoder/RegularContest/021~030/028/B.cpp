#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  priority_queue<pair<int, int>> pq;
  for (int i = 0; i < k; i ++) pq.push(a[i]);
  cout << pq.top().second << endl;

  for (int i = k; i < n; i ++) {
    if (pq.top().first > a[i].first) {
      pq.pop();
      pq.push(a[i]);
    }
    cout << pq.top().second << endl;
  }
}