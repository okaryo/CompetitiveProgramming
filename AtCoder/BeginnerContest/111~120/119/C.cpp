#include <bits/stdc++.h>
using namespace std;

int N, A, B, C, ans = 1e9;
int l[8];

void calc(vector<int> v) {
  int a = 0, b = 0, c = 0, al = 0, bl = 0, cl = 0;
  for (int i = 0; i < v.size(); i ++) {
    if (v[i] == 0) a ++, al += l[i];
    else if (v[i] == 1) b ++, bl += l[i];
    else if (v[i] == 2) c ++, cl += l[i];
  }
  if (al == 0 || bl == 0 || cl == 0) return;
  a = max(0, a - 1), b = max(0, b - 1), c = max(0, c - 1);
  int sum = 10 * (a + b + c) + abs(A - al) + abs(B - bl) + abs(C - cl);
  ans = min(ans, sum);
  return;
}

void dfs(int depth, vector<int> v) {
  if (depth == N) {
    calc(v);
    return;
  }
  for (int i = 0; i < 4; i ++) {
    v[depth] = i;
    dfs(depth + 1, v);
  }
}

int main() {
  cin >> N >> A >> B >> C;
  for (int i = 0; i < N; i ++) cin >> l[i];

  vector<int> vec(N);
  dfs(0, vec);

  cout << ans << endl;
}
