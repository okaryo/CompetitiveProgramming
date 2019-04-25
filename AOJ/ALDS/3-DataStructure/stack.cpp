#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> st;
  string s;
  int a, b;
  while(cin >> s) {
    if (s == "+") {
      b = st.top();
      st.pop();
      a = st.top();
      st.pop();
      st.push(a + b);
    } else if (s == "-") {
      b = st.top();
      st.pop();
      a = st.top();
      st.pop();
      st.push(a - b);
    } else if (s == "*") {
      b = st.top();
      st.pop();
      a = st.top();
      st.pop();
      st.push(a * b);
    } else {
      st.push(stoi(s));
    }
  }

  cout << st.top() << endl;
}
