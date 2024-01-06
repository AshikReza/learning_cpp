// * 1. 1D Array:

// #include <iostream>

// using namespace std;

// int main() {
//     // Declaration and Initialization
//     int arr[5] = {1, 2, 3, 4, 5};

//     // Accessing elements
//     cout << "Elements of the array: ";
//     for (int i = 0; i < 5; ++i) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// ----------------------------------------------------------------

// * 2. 2D Array:

// #include <iostream>

// using namespace std;

// int main() {
//     // Declaration and Initialization
//     int twoDimensionalArray[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     // Accessing elements in a 2D array
//     cout << "2D Array Elements:" << endl;
//     for (int row = 0; row < 3; ++row) {
//         for (int col = 0; col < 4; ++col) {
//             cout << twoDimensionalArray[row][col] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ----------------------------------------------------------------

// * 3. Multi-dimensional Array:

#include <iostream>

using namespace std;

int main() {
    // Multi-dimensional Array
    const int numLayers = 2;
    const int numRows = 3;
    const int numCols = 4;
    
    int multiDimensionalArray[numLayers][numRows][numCols] = {
        {{1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}},
        
        {{13, 14, 15, 16}, 
        {17, 18, 19, 20}, 
        {21, 22, 23, 24}}
    };

    // Accessing elements in a 3D array
    cout << "Elements of the 3D array:" << endl;
    for (int layer = 0; layer < numLayers; ++layer) {
        for (int row = 0; row < numRows; ++row) {
            for (int col = 0; col < numCols; ++col) {
                cout << multiDimensionalArray[layer][row][col] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}


// * mini project using multi dimensional arrays

// * Code:

// #include <iostream>

// using namespace std;

// int main() {
//     const int numStudents = 3;
//     const int numCourses = 4;

//     // Multi-dimensional array to store student grades
//     int grades[numStudents][numCourses] = {
//         {90, 85, 88, 92},
//         {78, 89, 92, 87},
//         {95, 94, 97, 91}
//     };

//     // Accessing and displaying grades
//     cout << "Student Grades:" << endl;
//     for (int student = 0; student < numStudents; ++student) {
//         cout << "Student " << (student + 1) << ": ";
//         for (int course = 0; course < numCourses; ++course) {
//             cout << grades[student][course] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// ----------------------------------------------------------------

// * 4. Vector:

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     // Declaration and Initialization
//     vector<int> vec = {1, 2, 3, 4, 5};

//     // Accessing elements
//     cout << "Elements of the vector: ";
//     for (int i = 0; i < vec.size(); ++i) {
//         cout << vec[i] << " ";
//     }

//     return 0;
// }

// Solving Problems using Arrays:

// Arrays are crucial for solving various problems, such as searching, sorting, and dynamic programming. For instance, to find the sum of elements, you can iterate through the array, keeping a running total. Sorting an array can be done using algorithms like Bubble Sort or Merge Sort. Dynamic programming problems often involve creating arrays to store intermediate results for optimization.

// ----------------------------------------------------------------

// * Mini-Program:
// Create a program that finds the maximum element in an array:


// #include <iostream>

// using namespace std;

// int main() {
//     int arr[] = {15, 112, 9, 55, 8};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int maxElement = arr[0];

//     for (int i = 1; i < n; ++i) {
//         if (arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//     }

//     cout << "Maximum element in the array: " << maxElement << endl;

//     return 0;
// }

// * Note:

// Arrays are fundamental for organizing and manipulating data in programming. They provide efficient access to elements and are widely used in algorithms and data structures. Understanding arrays is key to mastering problem-solving in C++. Practice solving different types of problems to enhance your skills and familiarity with array operations.

// ----------------------------------------------------------------

// * Here's an example of a vector of vectors representing a 2D array:

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     // Creating a vector of vectors (2D array)
//     vector<vector<int>> matrix;

//     // Initializing a 3x3 matrix
//     int rows = 3, cols = 3;
//     matrix.resize(rows, vector<int>(cols, 0));

//     // Assigning values to the matrix
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             matrix[i][j] = i * cols + j + 1;
//         }
//     }

//     // Accessing elements of the matrix
//     cout << "Elements of the 2D array (vector of vectors):" << endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// In this example, vector<vector<int>> matrix is a vector of vectors representing a 2D array. Can extend this concept to create vectors with more dimensions as needed.

// A vector of vectors might have a small performance overhead compared to a traditional 2D array, but the flexibility it provides can be valuable in many situations.


