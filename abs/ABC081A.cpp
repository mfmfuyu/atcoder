#include <iostream>
#include <string>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int result = 0;

  for (int i = 0, l = s.size() ; i < l ; ++i) {
    if (s[i] == '1') ++result;
  }

  cout << result << '\n';

  return 0;
}
