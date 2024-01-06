#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("1_input.txt");

    if (inputFile.is_open()) {
        int num;
        while (inputFile >> num) {
            cout << "Read: " << num << endl;
        }

        inputFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}




// * Key Differences Between if/else and while:

// ! Purpose:

// ? while: Used for repeated execution of a block of code as long as a condition is true.

// ? if/else: Used for conditional execution of different blocks of code based on a true or false condition.

// ! Structure:

// ? while: Consists of a loop structure that repeatedly executes the code block while the condition is true.

// ? if/else: Consists of a branching structure where one of the two code blocks is executed based on the condition.

// ! Number of Executions:

// ? while: Can execute the code block multiple times (zero or more) depending on the condition.

// ? if/else: Executes either the if block or the else block, but not both. It is a one-time decision.

// ! Example Use Cases:

// ? while: Used for tasks like iterating through elements in an array, reading data from a file until a specific condition is met, etc.

// ? if/else: Used for making decisions in the program flow, such as checking if a number is positive or negative and taking different actions accordingly.