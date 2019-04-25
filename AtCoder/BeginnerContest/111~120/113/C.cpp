#include <bits/stdc++.h>
using namespace std;

int N, M;

string id(int a) {
  int t = a, c = 0;
  while (t > 0) {
    c ++;
    t /= 10;
  }
  string res = "";
  for (int i = 0; i < 6 - c; i ++) res += '0';
  res += to_string(a);
  return res;
}

int main() {
  cin >> N >> M;
  vector<int> p(M), y(M), v[100001];
  for (int i = 0; i < M; i ++) {
    cin >> p[i] >> y[i];
    v[p[i]].push_back(y[i]);
  }
  for (int i = 1; i <= N; i ++) sort(v[i].begin(), v[i].end());

  for (int i = 0; i < M; i ++) {
    int t = lower_bound(v[p[i]].begin(), v[p[i]].end(), y[i]) - v[p[i]].begin() + 1;
    cout << id(p[i]) << id(t) << endl;
  }
}
