#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int result = 0;

  rep (i, s.size()) {
    if (s[i] == '1') ++result;
  }

  cout << result << '\n';

  return 0;
}
