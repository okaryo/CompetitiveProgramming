#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string ans;
  if (n <= 59) {
    ans = "Bad";
  } else if (n <= 89) {
    ans = "Good";
  } else if (n <= 99) {
    ans = "Great";
  } else {
    ans = "Perfect";
  }

  cout << ans << endl;
}
