#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(vector<int> vec) {
  for (int i = 0, l = vec.size() ; i < l ; ++i) {
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
  for (int i = 0 ; i < N ; ++i) {
    cin >> vec.at(i);
  }

  int result = 0;
  
  while (check(vec)) {
    ++result;
    for (int i = 0, l = vec.size() ; i < l ; ++i) {
      vec[i] = vec[i] / 2;
    }
  }

  cout << result << '\n';

  return 0;
}
