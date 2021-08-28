#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  stack<char> stack;
  for (int i = 0; i < s.size(); i ++) {
    if (s.at(i) == 'S') {
      stack.push('S');
    } else if (s.at(i) == 'T' && (stack.empty() || stack.top() == 'T')) {
      stack.push('T');
    } else {
      stack.pop();
    }
  }

  cout << stack.size() << endl;
}
