#include <bits/stdc++.h>
using namespace std;

int main() {
  double h, bmi;
  cin >> h >> bmi;
  double H = h / 100;

  cout << setprecision(10) << bmi * H * H << endl;
}
