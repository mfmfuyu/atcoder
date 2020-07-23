#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)
#define rep2(i, n, a) for (int i = a ; i < (int)(n) ; ++i)

#define per(i, n) for (int i = n ; i >= 0 ; --i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<bool> v(9);

  int result = 0;
  rep(i, N) {
    string s;
    cin >> s;

    rep(j, 9) {
      if (s[j] == 'x') {
        v[j] = false;
        ++result;
      } else if (s[j] == 'o') {
        if (!v[j]) {
          v[j] = true;
          ++result;
        }
      } else {
        v[j] = false;
      }
    }
  }

  cout << result << '\n';

  return 0;
}