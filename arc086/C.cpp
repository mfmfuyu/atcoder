#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)
#define rep2(i, n, a) for (int i = a ; i < (int)(n) ; ++i)

#define per(i, n) for (int i = n ; i >= 0 ; --i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  map<ll, ll> m;
  rep (i, n) {
    ll a;
    cin >> a;

    ++m[a];
  }

  vector<pair<ll, ll>> v;
  for (pair<ll, ll> p : m) {
    v.push_back(p);
  }

  sort(v.begin(), v.end(), [](pair<ll, ll> i, pair<ll, ll> j) -> bool {
    return i.second < j.second;
  });

  ll result = 0;
  rep(i, v.size() - k) {
    result += v.at(i).second;
  }

  cout << result << '\n';

  return 0;
}