#include <bits/stdc++.h>
using namespace std;

const int N = 100000;
const int M = 100000;

int n, m;
int l[N], r[N], s[N];

int main() {
  cin >> n >> m;
  long long sum = 0;
  for (int i = 0; i < n; i ++) {
    cin >> l[i] >> r[i] >> s[i];
    sum += s[i];
  }

  long long ans = 0;
  vector<long long> a(m+2);
  for (int i = 0; i < n; i ++) {
    a[l[i]] += s[i];
    a[r[i]+1] -= s[i];
  }
  long long minv = 100000000000;
  for (int i = 1; i <= m; i ++) {
    a[i] += a[i-1];
    minv = min(minv, a[i]);
  }


  cout << sum - minv << endl;
}
