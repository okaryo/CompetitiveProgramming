#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s; cin >> s;
  set<char> st;
  for (int i = 0; i < s.size(); i ++) st.insert(s[i]);
  if (st.size() == 2) cout << "Yes" << endl;
  else cout << "No" << endl;
}