#include <iostream>
using namespace std;

int main() {
  int n, i, j, space;

  cout << "Enter the number of rows: ";
  cin >> n;

  // Upper half of the diamond
  for(i = 0; i < n; i++) {
    // Spaces before first half of stars
    for(space = 1; space < n-i; space++)
      cout << " ";

    // Stars for first half of diamond
    for(j = 0; j < 2*i+1; j++)
      cout << "*";

    cout << endl;
  }

  // Lower half of the diamond
  for(i = n-2; i >= 0; i--) {
    // Spaces before second half of stars
    for(space = 1; space < n-i; space++)
      cout << " ";

    // Stars for second half of diamond
    for(j = 0; j < 2*i+1; j++)
      cout << "*";

    cout << endl;
  }

  return 0;
}
