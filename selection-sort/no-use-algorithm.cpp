#include <iostream>
#include <vector>

#define SWAP(a, b) { int t = a; a = b; b = t; }

using namespace std;

int main() {
  int n;
  vector<int> s;

  cin >> n;

  s.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] > s[j]) {
        SWAP(s[i], s[j]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }
}
