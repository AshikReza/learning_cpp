// ! Appending to a file in C++ refers to the process of adding new data or content to the end of an existing file without overwriting its current contents. When you open a file in append mode, the file pointer is positioned at the end of the file, and any data you write is added to the existing content.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // ? ( ios::app ) This flag is used when opening the file to indicate that the file should be opened in append mode. It ensures that the file pointer is positioned at the end of the file.
    
    ofstream outputFile("3_output.txt", ios::app);

    if (outputFile.is_open()) {
        for (int i = 6; i <= 10; ++i) {
            outputFile << i << " ";
        }

        outputFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
