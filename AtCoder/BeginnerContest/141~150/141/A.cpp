#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  if (s[0] == 'S') {
    cout << "Cloudy" << endl;
  } else if (s[0] == 'C') {
    cout << "Rainy" << endl;
  } else {
    cout << "Sunny" << endl;
  }
}