#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "May I know your name? \n";

  // cin >> name;
  // cin reads only one word. If the string contains more than one word use
  // getline.

  getline(cin, name);

  cout << "Welcome " << name;
  return 0;
}