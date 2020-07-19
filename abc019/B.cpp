#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)
#define rep2(i, n, a) for (int i = a ; i < (int)(n) ; ++i)

#define per(i, n) for (int i = n ; i >= 0 ; --i)

ll calc(ll a, ll b, ll c) {
  ll side1, side2, rect1, rect2;
  if (a > b) {
    side1 = floor(a / 2);
    side2 = a - side1;

    rect1 = side1 * b * c;
    rect2 = side2 * b * c;
  } else {
    side1 = floor(b / 2);
    side2 = b - side1;

    rect1 = a * side1 * c;
    rect2 = a * side2 * c;
  }

  return abs(rect1 - rect2);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string result = "";

  char c = s[0];
  s = s.substr(1);

  int cnt = 1;
  rep(i, s.size()) {
    if (c != s[i]) {
      result += c + to_string(cnt);
      c = s[i];
      cnt = 1;
    } else {
      ++cnt;
    }
  }

  result += c + to_string(cnt);

  cout << result << '\n';

  return 0;
}