#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  string s;

  cin >> a;
  cin >> b >> c;
  cin >> s;

  cout << (a + b + c) << ' ' << s << '\n';

  return 0;
}
