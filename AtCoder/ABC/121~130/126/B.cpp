#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;
  string a = "", b = "";
  a += s[0];
  a += s[1];
  b += s[2];
  b += s[3];
  vector<string> vec = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};
  bool YYMM = false, MMYY = false;
  for (int i = 0; i < 12; i ++) {
    if (a == vec[i]) MMYY = true;
    if (b == vec[i]) YYMM = true;
  }

  if (MMYY && YYMM) {
    cout << "AMBIGUOUS" << endl;
  } else if (MMYY) {
    cout << "MMYY" << endl;
  } else if (YYMM) {
    cout << "YYMM" << endl;
  } else {
    cout << "NA" << endl;
  }
}