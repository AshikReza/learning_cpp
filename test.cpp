#include <iostream>
#include <string>
using namespace std;

int main() {
  // Declare a string variable to store the input
  string input;

  // Prompt the user to enter a string
  cout << "Enter a string: ";
  cin >> input;

  // Declare two integer variables to count the vowels and consonants
  int vowels = 0;
  int consonants = 0;

  for (int i = 0; i < input.length(); i++) {
    switch (input[i]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        vowels++;
        break;
      default:
        consonants++;
    }
  }

  // Print the number of vowels and consonants
  cout << "Vowels: " << vowels << endl;
  cout << "Consonants: " << consonants << endl;

  return 0;
}