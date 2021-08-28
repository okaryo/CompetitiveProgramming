#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  double sum = 0;
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'A') sum += 4;
    if (s.at(i) == 'B') sum += 3;
    if (s.at(i) == 'C') sum += 2;
    if (s.at(i) == 'D') sum += 1;
  }

  cout << setprecision(10) << sum / n << endl;
}
