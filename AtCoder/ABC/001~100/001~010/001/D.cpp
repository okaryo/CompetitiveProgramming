#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> sum(1441 + 1, 0);
  for (int i = 0; i < n; i ++) {
    string s; cin >> s;
    int start = stoi(s.substr(0, 4));
    int end   = stoi(s.substr(5, 4));
    start = start - (start % 5);
    end   = end + (5 - (end % 5)) % 5;
    int s_m = (start % 100) + (start / 100) * 60;
    int e_m = (end % 100) + (end / 100) * 60;
    sum[s_m] ++, sum[e_m + 1] --;
  }

  for (int i = 1; i < 1442; i ++) {
    sum[i] += sum[i - 1];
  }

  bool flag = false;
  for (int i = 0; i < 1442; i ++) {
    if (!flag && sum[i] > 0) {
      flag = true;
      int s_m = i;
      int sh = s_m / 60;
      int sm = s_m % 60;
      if (sh / 10 == 0) cout << "0";
      cout << sh;
      if (sm / 10 == 0) cout << "0";
      cout << sm << "-";
    } else if (flag && sum[i] == 0) {
      flag = false;
      int e_m = i - 1;
      int eh = e_m / 60;
      int em = e_m % 60;
      if (eh / 10 == 0) cout << "0";
      cout << eh;
      if (em / 10 == 0) cout << "0";
      cout << em << endl;
    }
  }
}
