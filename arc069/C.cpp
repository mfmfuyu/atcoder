#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)
#define rep2(i, n, a) for (int i = a ; i < (int)(n) ; ++i)

#define per(i, n) for (int i = n ; i >= 0 ; --i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;

  ll result = 0;
  ll tmp = floor(m / 2);
  if (tmp >= n) {
    result += n;
    m -= n * 2;
  } else {
    result += tmp;
    m -= tmp * 2;
  }

  result += floor(m / 4);

  cout << result << '\n';

  return 0;
}