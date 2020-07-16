#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

#define rep(i, n) for (int i = 0 ; i < (int)(n) ; ++i)

map<char, int> toMap(string str) {
  map<char, int> result;

  int size = str.size();
  rep(i, size) {
    if (result.find(str[i]) == result.end()) {
      result[str[i]] = 1;
    } else {
      result[str[i]] = result[str[i]] + 1;
    }
  }

  return result;
}

map<char, int> baseMap = toMap("indeednow");

bool check(string str) {
  map<char, int> foo = toMap(str);

  for (pair<char, int> p:foo) {
    if (baseMap.find(p.first) == baseMap.end()) return false;
    if (baseMap[p.first] != foo[p.first]) return false;
  }

  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  rep(i, N) {
    string str;
    cin >> str;

    cout << (check(str) ? "YES" : "NO") << '\n';
  }

  return 0;
}