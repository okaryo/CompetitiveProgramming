#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, r; cin >> x1 >> y1 >> r;
    int x2, y2, x3, y3; cin >> x2 >> y2 >> x3 >> y3;
    bool red, blue;
    red = !(x2 <= x1 - r && x1 + r <= x3 && y2 <= y1 - r && y1 + r <= y3);
    blue = hypot(x2 - x1, y2 - y1) > r || hypot(x2 - x1, y3 - y1) > r
        || hypot(x3 - x1, y2 - y1) > r || hypot(x3 - x1, y3 - y1) > r;
    cout << (red ? "YES" : "NO") << '\n' << (blue ? "YES" : "NO") << '\n';
    return 0;
}
