#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> vec(9);
  for (int i = 0; i < 9; i ++) {
    cin >> vec.at(i);
  }

  cout << vec.at(0) << vec.at(4) << vec.at(8) << endl;
}
