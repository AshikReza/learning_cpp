// * 1. Pointer Declaration and Initialization:

// Definition: A pointer is a variable that stores the memory address of another variable. The process of creating a pointer is called declaration, and assigning the memory address to a pointer is called initialization.

// * Code:

// #include <iostream>

// using namespace std;

// int main() {
//     // In C++, both ( int* A ) and ( int *A ) declare a pointer to an integer, and there is no difference between them in terms of functionality. The placement of the asterisk (*) with the type (int) is a matter of personal or team coding style preference. Both forms are widely used, and the choice often depends on the convention adopted by a particular coding standard or team.

//     int num = 42;
//     int *ptr;  // Pointer Declaration

//     ptr = &num;  // Pointer Initialization

//     cout << "Value of num: " << num << endl;
//     cout << "Address of num: " << &num << endl;
//     cout << "Value pointed by ptr: " << *ptr << endl;
//     cout << "Address stored in ptr: " << ptr << endl;

//     cout << "------------------------------" << endl;

//     int myVariable = 42;

//     // Using the address-of operator to find the address of the variable.
//     // int* is a pointer type that can store the memory address of an integer variable.
//     int* ptrToVariable = &myVariable;

//     cout << "Value of myVariable: " << myVariable << endl;
//     cout << "Address of myVariable: " << ptrToVariable << endl;

//     // Change the value of myVariable through the pointer
//     *ptrToVariable = 99;

//     // Print the updated value of myVariable
//     cout << "Updated value of myVariable: " << myVariable << endl;

//     return 0;
// }

// ---------------------------------------------------------------------

// * Finding the Address of an Array:

// #include <iostream>
// using namespace std;

// int main() {
//     int myArray[] = {1, 2, 3, 4, 5};

//     // Using the address-of operator to find the address of the array
//     int* ptrToArray = myArray;

//     // Printing the addresses of array elements
//     for (int i = 0; i < 5; ++i) {
//         cout << "Address of myArray[" << i << "]: " << &myArray[i] << endl;
//     }

//     return 0;
// }


// ---------------------------------------------------------------------

// * 2. Pointer Arithmetic:

// Definition: Pointer arithmetic involves manipulating pointers to access different memory locations. Adding an integer to a pointer increments it by the size of the data type.

// * Code:

// #include <iostream>

// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;

//     cout << "Value at first index: " << *ptr << endl;  // 10

//     ptr++;  // Increment pointer
//     cout << "Value at second index: " << *ptr << endl;  // 20

//     return 0;
// }

// ---------------------------------------------------------------------

// * 3. Pointer and Arrays:

// Definition: Arrays and pointers in C++ are closely related. An array name can be used as a pointer to the first element of the array.

// * Code:

// #include <iostream>

// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;

//     cout << "Value at first index: " << *ptr << endl;  // 10

//     ptr++;  // Move to the next element
//     cout << "Value at second index: " << *ptr << endl;  // 20

//     return 0;
// }

// ---------------------------------------------------------------------

// * 4. Pointer and Strings:

// Definition: C++ represents strings as arrays of characters. Pointers can be used to manipulate and traverse strings.

// * Code:

// #include <iostream>

// using namespace std;

// int main() {
//     const char *str = "Hello, C++!";

//     // Print each character using pointer
//     while (*str != '\0') {
//         cout << *str;
//         str++;
//     }

//     return 0;
// }

// ---------------------------------------------------------------------

// * 5. Pointer to Functions:

// Definition: Pointers can store the address of functions. This is useful for creating arrays of functions or passing functions as arguments.

// * Code:

// #include <iostream>

// using namespace std;

// // Function
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     // Pointer to function
//     int (*ptr)(int, int) = &add;

//     // Using pointer to call function
//     cout << "Sum: " << ptr(3, 4) << endl;

//     return 0;
// }

// ---------------------------------------------------------------------

// * 6. Dynamic Memory Allocation:

// Definition: Pointers are often used for dynamic memory allocation using new and releasing memory using delete.

// * Code:

// #include <iostream>

// using namespace std;

// int main() {
//     int *arr = new int[5];  // Dynamic memory allocation

//     for (int i = 0; i < 5; ++i) {
//         arr[i] = i + 1;
//     }

//     for (int i = 0; i < 5; ++i) {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;  // Release allocated memory

//     return 0;
// }


// Pointers in C++, including declaration, initialization, pointer arithmetic, pointers and arrays, pointers and strings, pointers to functions, and dynamic memory allocation. 