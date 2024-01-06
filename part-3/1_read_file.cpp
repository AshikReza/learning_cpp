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

