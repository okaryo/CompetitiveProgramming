#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for(int i = (s); i < int(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  ll n;
  cin >> n;
  vector<string> s(n);
  vector<string> t(n);
  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];
  ll s_count = 0;
  rep(i, n) rep(j, n) {
    if (s[i][j] == '#') s_count++;
  }
  ll t_count = 0;
  rep(i, n) rep(j, n) {
    if (t[i][j] =='#') t_count++;
  }
  if (s_count != t_count) {
    cout << "No" << endl;
    return 0;
  }

  vector<ll> s_sharp_x;
  vector<ll> s_sharp_y;
  rep(i, n) rep(j, n) {
    if (s[i][j] =='#') {
      s_sharp_x.push_back(i);
      s_sharp_y.push_back(j);
    }
  }

  ll t_match_count = 0;
  rep2(di, -n, n+1) {
    rep2(dj, -n, n+1) {
      t_match_count = 0;
      rep(i, s_sharp_x.size()) {
        ll x = s_sharp_x[i] + di;
        ll y = s_sharp_y[i] + dj;
        if (x < 0 || x >= n || y < 0 || y >= n) break;
        if (t[x][y] =='#') t_match_count++;
      }
      if (t_match_count == t_count) {
        cout << "Yes" << endl;
        return 0;
      }

      t_match_count = 0;
      rep(i, s_sharp_x.size()) {
        ll x = -1 * s_sharp_y[i] + di;
        ll y = s_sharp_x[i] + dj;
        if (x < 0 || x >= n || y < 0 || y >= n) break;
        if (t[x][y] == '#') t_match_count++;
      }
      if (t_match_count == t_count) {
        cout << "Yes" << endl;
        return 0;
      }

      t_match_count = 0;
      rep(i, s_sharp_x.size()) {
        ll x = -1 * s_sharp_x[i] + di;
        ll y = -1 * s_sharp_y[i] + dj;
        if (x < 0 || x >= n || y < 0 || y >= n) break;
        if (t[x][y] == '#') t_match_count++;
      }
      if (t_match_count == t_count) {
        cout << "Yes" << endl;
        return 0;
      }

      t_match_count = 0;
      rep(i, s_sharp_x.size()) {
        ll x = s_sharp_y[i] + di;
        ll y = -1 * s_sharp_x[i] + dj;
        if (x < 0 || x >= n || y < 0 || y >= n) break;
        if (t[x][y] == '#') t_match_count++;
      }
      if (t_match_count == t_count) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
