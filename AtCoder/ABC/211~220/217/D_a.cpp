#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for(int i = (s); i < int(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  ll l,q;
  cin >> l >> q;
  set<ll> st;
  st.insert(0);
  st.insert(l);
  ll c,x;
  rep(i, q) {
    cin >> c >> x;
    if (c == 1) {
      st.insert(x);
    } else {
      auto idx = st.lower_bound(x);
      cout << *idx - *prev(idx) << endl;
    }
  }
}
