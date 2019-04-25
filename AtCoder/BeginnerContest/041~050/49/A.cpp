#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  cin >> c;
  vector<char> vec = {'a', 'e', 'i', 'o', 'u'};

  for (int i = 0; i < 5; i ++) {
    if (c == vec.at(i)) {
      cout << "vowel" << endl;
      return 0;
    }
  }

  cout << "consonant" << endl;
}
