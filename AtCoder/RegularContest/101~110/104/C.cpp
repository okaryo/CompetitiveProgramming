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
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int at = 0, gc = 0;
    for (int j = i; j < n; j++) {
      if (s[j] == 'A') {
        at++;
      } else if (s[j] == 'T') {
        at--;
      } else if (s[j] == 'G') {
        gc++;
      } else {
        gc--;
      }
      if (at == 0 && gc == 0) ans++;
    }
  }
  cout << ans << endl;
}
