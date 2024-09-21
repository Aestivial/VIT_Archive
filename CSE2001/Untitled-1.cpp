#include <iostream>
#include <string>

using namespace std;

int main() {
  string inputString;

  cout << "Enter a string: ";
  getline(cin, inputString);  
  
  string reversedString;
  for (int i = inputString.length() - 1; i >= 0; i--) {
    reversedString += inputString[i];
  }

  cout << "Reversed string: " << reversedString << endl;

  return 0;
}
