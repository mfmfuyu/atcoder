#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

bool check(vector<int> vec) {
  rep (i, vec.size()) {
    if (vec[i] % 2 != 0) return false;
  }

  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> vec(N);
  rep (i, N) {
    cin >> vec.at(i);
  }

  int result = 0;

  while (check(vec)) {
    ++result;
    rep (i, vec.size()) {
      vec[i] = vec[i] / 2;
    }
  }

  cout << result << '\n';

  return 0;
}
