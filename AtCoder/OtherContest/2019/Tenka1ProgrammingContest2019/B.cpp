#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  int n, k;
  string s;
  cin >> n >> s >> k;

  char t = s[k - 1];
  for (int i = 0; i < n; i ++) {
    if (s[i] == t) continue;
    s[i] = '*';
  }

  cout << s << endl;
}