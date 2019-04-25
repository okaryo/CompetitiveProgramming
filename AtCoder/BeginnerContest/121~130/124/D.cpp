#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  vector<int> vec;
  int sum = 1;
  for (int i = 1; i < n; i ++) {
    if (s[i] != s[i-1]) {
      vec.push_back(sum);
      sum = 0;
    }
    sum ++;
  }
  vec.push_back(sum);
  if (s[0] == '0') vec.insert(vec.begin(), 0);
  if (s[n-1] == '0') vec.push_back(0);

  vector<int> c(vec.size() + 1);
  for (int i = 1; i < c.size(); i ++) {
    c[i] = c[i-1] + vec[i-1];
  }

  int ansX = c[min(2*k+1, (int)c.size() - 1)];
  for (int i = 2*k+3; i < c.size(); i += 2) {
    int tmp = c[i] - c[i - 2*k - 1];
    ansX = max(ansX, tmp);
  }
  cout << ansX << endl;
  
  /*
  int ans = 0;
  for (int i = 0; i <= min(2*k, (int)vec.size()); i ++) ans += vec[i];

  int tmp = ans;
  int j = 0;
  for (int i = 2*k + 1; i < vec.size(); i += 2) {
    tmp = tmp + vec[i] + vec[i+1] - vec[j] - vec[j+1];
    j += 2;
    ans = max(ans, tmp);
  }

  cout << ans << endl;
  */
}