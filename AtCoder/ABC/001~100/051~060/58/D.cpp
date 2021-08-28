#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  vector<LL> a(N);
  for (int i = 0; i < N; i ++) cin >> a[i];

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  
}