#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int j = 0;
  vector<char> a = {'I', 'C', 'T', '0'};
  vector<char> b = {'i', 'c', 't', '0'};
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == a.at(j) || s.at(i) == b.at(j)) j ++;
  }

  if (j == 3) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
