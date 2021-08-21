#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <tuple>
#include <assert.h>
#include <deque>
#include <bitset>
#include <iomanip>
#include <limits>
#include <chrono>
#include <random>
#include <array>
#include <unordered_map>
#include <functional>
#include <complex>
#include <numeric>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll gcd(ll a, ll b) {
  return b ? gcd(b, a % b) : a;
}

ll lcm_fun(ll a, ll b) {
  return a * b / gcd(a, b);
}

int main() {
  ll N, M;
  cin >> N >> M;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  ll lcm = 1;
  rep(i, N) {
    lcm = lcm_fun(lcm, A[i]);
  }
  vector<ll> ans(0);
  for (ll i = 1; i <= M; i++) {
    if (gcd(lcm, i) == 1) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << endl;
}
