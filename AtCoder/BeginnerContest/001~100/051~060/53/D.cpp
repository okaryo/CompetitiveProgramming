#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  LL n; cin >> n;
  set<LL> st;
  for (int i = 0; i < n; i ++) {
    LL t; cin >> t;
    st.insert(t);
  }

  if (st.size() % 2 == 1) {
    cout << st.size() << endl;
  } else {
    cout << st.size() - 1 << endl;
  }
}