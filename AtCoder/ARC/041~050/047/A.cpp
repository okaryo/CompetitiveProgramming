#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  string s;
  cin >> n >> l >> s;

  int cnt = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == '+') cnt ++;
    else cnt --;
  }

  cout << cnt / l << endl;
}
