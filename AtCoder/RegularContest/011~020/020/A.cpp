#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (abs(a) > abs(b)) cout << "Bug";
  else if (abs(a) == abs(b)) cout << "Draw";
  else cout << "Ant";
  cout << endl;
}
