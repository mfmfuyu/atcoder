#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  queue<string> q;
  rep(i, N) {
    string str;
    cin >> str;

    q.push(str);
  }

  vector<string> vec;

  int result = 0;

  string w1 = q.front();
  q.pop();

  vec.push_back(w1);

  bool flag = false;

  while (!q.empty()) {
    string w2 = q.front();
    q.pop();

    if (find(vec.begin(), vec.end(), w2) != vec.end()) {
      result = (flag ? -1 : 1);
      break;
    }

    vec.push_back(w2);

    if (w1[w1.size() - 1] != w2[0]) {
      result = (flag ? -1 : 1);
      break;
    }

    w1 = w2;
    flag = !flag;
  }

  if (result == 1) {
    cout << "WIN" << '\n';
  } else if (result == -1) {
    cout << "LOSE" << '\n';
  } else {
    cout << "DRAW" << '\n';
  }

  return 0;
}