#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;

  for (int i = 0; i < w.size(); i ++) {
    if (w.at(i) != 'a' && w.at(i) != 'e' && w.at(i) != 'i' && w.at(i) != 'o' && w.at(i) != 'u') {
      cout << w.at(i);
    }
  }
  cout << endl;
}
