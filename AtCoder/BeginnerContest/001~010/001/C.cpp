#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  string A[16] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
  int i = ((a*10 + 1125)/2250)%16;
  string D = A[i];
  int W;
  if (b < 0.25*60) W = 0, D = "C";
  else if (b < 1.55*60) W = 1;
  else if (b < 3.35*60) W = 2;
  else if (b < 5.45*60) W = 3;
  else if (b < 7.95*60) W = 4;
  else if (b < 10.75*60) W = 5;
  else if (b < 13.85*60) W = 6;
  else if (b < 17.15*60) W = 7;
  else if (b < 20.75*60) W = 8;
  else if (b < 22.45*60) W = 9;
  else if (b < 28.45*60) W = 10;
  else if (b < 32.65*60) W = 11;
  else W = 12;

  cout << D << " " << W << endl;
}
