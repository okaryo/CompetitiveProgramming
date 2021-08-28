#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  s[b-1] = s[b - 1] + 32;
  cout << s << endl;
}