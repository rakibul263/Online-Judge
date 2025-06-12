#include<bits/stdc++.h>
using namespace std;

int yo(int n) {
  if (n <= 0) {
    return 1;
  }
  else {
    return yo(n - 1) + yo(n + 1); // Recursive calls
  }
}

int main() {
  cout << yo(2) << '\n';
  return 0;
}