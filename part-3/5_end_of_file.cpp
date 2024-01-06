#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the file in a way that is safer and more idiomatic
    ifstream inputFile("5_input.txt");

    // Check if the file is open
    if (!inputFile) {
        // Display an error message if the file couldn't be opened
        cout << "Unable to open file." << endl;
        return 1; // Return an error code
    }

    int num;

    // Loop until reading from the file fails
    while (inputFile >> num) {
        // Display the read number
        cout << "Read: " << num << endl;
    }

    // Check if the failure was due to reaching the end of the file
    if (inputFile.eof()) {
        cout << "End of file reached." << endl;
    } else {
        // Display an error message if reading failed for another reason
        cout << "Error reading from file." << endl;
    }

    // inputFile.close() is not necessary; it's automatically closed when it goes out of scope

    return 0;
}


// * end of file (EOF) is a condition that signifies the end of data in a file or input stream. It is represented by a special value called EOF. The EOF condition is commonly encountered when reading from a file or input stream, and it indicates that there is no more data to be read.


