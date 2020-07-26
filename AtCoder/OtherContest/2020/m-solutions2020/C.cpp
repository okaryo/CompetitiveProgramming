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

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) cin >> a[i];

  vector<ll> sum(n);
  sum[0] = a[0];
  for (ll i = 1; i < n; i ++) {
    if (i >= k) {
      sum[i] = sum[i-1] * a[i] / a[i-k];
    } else {
      sum[i] = a[i] * sum[i-1];
    }
  }

  for (ll i = 0; i < (n-k); i ++) {
    if (sum[k+i] > sum[k+i-1]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
