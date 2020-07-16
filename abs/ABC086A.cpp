#include <iostream>
#include <string>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  cout << ( (a * b) % 2 == 0 ? "Even" : "Odd" ) << '\n';

  return 0;
}
