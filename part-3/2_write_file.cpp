#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("part-3/2_output.txt");

    if (outputFile.is_open()) {
        for (int i = 1; i <= 20; ++i) {
            outputFile << i << " ";
        }

        outputFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
