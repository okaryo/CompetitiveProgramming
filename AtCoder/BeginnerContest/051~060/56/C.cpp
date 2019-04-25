#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  int sum = 0;
  int i = 1;
  while (n > sum) {
    ans ++;
    sum += i;
    i ++;
  }

  cout << ans << endl;
}
