#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }
  decltype(a)::iterator result = unique(a.begin(), a.end());
  a.erase(result, a.end());

  int cnt = 1;
  for (int i = 1; i < a.size() - 1; i ++) {
    bool incre1 = a.at(i - 1) < a.at(i);
    bool incre2 = a.at(i) < a.at(i + 1);
    if (incre1 != incre2) {
      cnt ++;
      i ++;
    }
  }

  cout << cnt << endl;
}
