#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  string ans = "No";
  if (a < c && c < b) ans = "Yes";
  if (b < c && c < a) ans = "Yes";

  cout << ans << endl;
}