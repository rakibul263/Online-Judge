#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;
  bool dangerous = false;

  for (char c : s) {
    if (c == '0') {
      count++;
      if (count >= 7) {
        dangerous = true;
        break;
      }
    } else {
      count = 0;
    }
  }

  if (dangerous) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
