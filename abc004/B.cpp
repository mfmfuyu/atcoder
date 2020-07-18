#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)
#define rep2(i, n, a) for (int i = a ; i < (int)(n) ; ++i)

#define per(i, n) for (int i = n ; i >= 0 ; --i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<vector<string>> v(4, vector<string>(4));

  rep (i, 4) {
    rep (j, 4) {
      cin >> v.at(i).at(j);
    }
  }

  per (i, 3) {
    vector<string> tmp = v.at(i);
    string out = tmp.at(3);
    per(j, 2) {
      out += ' ' + tmp.at(j);
    }
    cout << out << '\n';
  }

  return 0;
}