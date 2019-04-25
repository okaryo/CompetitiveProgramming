#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0, tmp = n;
  while (tmp > 0) {
    sum += tmp % 10;
    tmp /= 10;
  }

  if (n % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
