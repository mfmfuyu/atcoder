#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<ll> v(N);
  rep (i, N) {
    ll tmp;
    cin >> tmp;

    if (tmp == 0) {
      cout << 0 << '\n';
      return 0;
    }

    v.at(i) = tmp;
  }

  ll result = 1;
  rep (i, N) {
    // https://img.atcoder.jp/abc169/editorial.pdf
    if (v[i] <= 1000000000000000000 / result) {
      result *= v[i];
    } else {
      cout << -1 << '\n';
      return 0;
    }
  }

  cout << result << '\n';

  return 0;
}