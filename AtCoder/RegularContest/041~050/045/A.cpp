#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int i = 0;
  while (cin >> s) {
    if (i) cout << " ";
    if (s == "Left") cout << "<";
    else if (s == "Right") cout << ">";
    else if (s == "AtCoder") cout << "A";
    i ++;
  }
  cout << endl;
}
