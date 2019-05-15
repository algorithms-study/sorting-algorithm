#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  vector<int> s;

  cin >> n;

  s.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end());
  for (int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }

  return 0;
}

