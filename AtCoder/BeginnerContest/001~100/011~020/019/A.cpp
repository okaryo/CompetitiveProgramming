#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> vec = {a, b, c};
  sort(vec.begin(),vec.end());

  cout << vec.at(1) << endl;
}
