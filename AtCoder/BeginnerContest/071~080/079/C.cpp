#include <bits/stdc++.h>
using namespace std;

int main() {
  char A, B, C, D;
  cin >> A >> B >> C >> D;
  int a = A - 48, b = B - 48, c = C - 48, d = D - 48;
  if (a+b+c+d==7) cout <<a<<"+"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
  else if (a+b+c-d==7) cout <<a<<"+"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
  else if (a+b-c+d==7) cout <<a<<"+"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
  else if (a+b-c-d==7) cout <<a<<"+"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
  else if (a-b+c+d==7) cout <<a<<"-"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
  else if (a-b+c-d==7) cout <<a<<"-"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
  else if (a-b-c+d==7) cout <<a<<"-"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
  else if (a-b-c-d==7) cout <<a<<"-"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
}
