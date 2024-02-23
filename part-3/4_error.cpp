#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Try to open a file that doesn't exist
    ifstream inputFile("part-3/4_nonexistent.txt");

    // Check if the file is open
    if (!inputFile.is_open()) {
        // Display an error message and return with an error code
        cerr << "Error opening file." << endl;
        return 1;
    }

    // File processing code...

    // Read and sum the numbers from the file
    int num, sum = 0;
    while (inputFile >> num) {
        sum += num;
    }

    // Display the result
    cout << "Sum of numbers: " << sum << endl;

    // Close the file when done
    inputFile.close();

    return 0;
}


// * This program attempts to open a file, reads integers from the file, calculates their sum, and displays the result. If the file opening fails, it displays an error message and exits with a non-zero error code.