#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  cout << ( (a * b) % 2 == 0 ? "Even" : "Odd" ) << '\n';

  return 0;
}
