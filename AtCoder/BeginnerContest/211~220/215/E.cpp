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
  int N;
  string S;
  cin >> N >> S;
  int MOD = 998244353;
  int ALL = 1<<10;
  ll dp[1010][ALL][11];
  dp[0][0][10] = 1;
  for (int i = 0; i < N; i++) {
    for (int bits = 0; bits < ALL; bits++) {
      for (int last = 0; last < 11; last++) {
        if (dp[i][bits][last] == 0) {
          continue;
        }
        dp[i+1][bits][last] += dp[i][bits][last];
        dp[i+1][bits][last] %= MOD;

        int next_c = S[i] - 'A';
        if (bits & (1<<next_c) && last != next_c) {
          continue;
        }
        dp[i+1][bits|(1<<next_c)][next_c] += dp[i][bits][last];
        dp[i+1][bits|(1<<next_c)][next_c] %= MOD;
      }
    }
  }
  ll ans = 0;
  for (int bits = 0; bits < ALL; bits++) {
    for (int last = 0; last < 10; last++) {
      ans += dp[N][bits][last];
      ans %= MOD;
    }
  }
  cout << ans << endl;
}
