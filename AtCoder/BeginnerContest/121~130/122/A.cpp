#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  char a;
  cin >> a;
  if (a == 'A') cout << 'T';
  else if (a == 'T') cout << 'A';
  else if (a == 'G') cout << 'C';
  else if (a == 'C') cout << 'G';
  cout << endl;
}