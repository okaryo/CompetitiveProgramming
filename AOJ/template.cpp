#include <bits/stdc++.h>
using namespace std;

int main() {
}

vector<int> a(n);
for (int i = 0; i < n; i ++) {
  cin >> a.at(i);
}

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}
