#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  int r1 = 0;
  int r2 = 0;
  int r3 = 0;
  int r4 = 0;
  int r5 = 0;
  int r6 = 0;

  rep (i, N) {
      double MT, mT;
      cin >> MT >> mT;

      if (MT >= 35) {
          ++r1;
      } else if (MT >= 30) {
          ++r2;
      } else if (MT >= 25) {
          ++r3;
      }

      if (mT >= 25) {
          ++r4;
      }

      if (mT < 0 && MT >= 0) {
          ++r5;
      }

      if (MT < 0) {
          ++r6;
      }
  }

  cout << r1 << ' ' << r2 << ' ' << r3 << ' ' << r4 << ' ' << r5 << ' ' << r6 << '\n';

  return 0;
}