// * 1. Function Declaration and Definition:

// Definition: A function in C++ is a named, reusable block of code that performs a specific task. It is declared and defined using a function signature, return type, and a block of statements.

// * Code:

#include <iostream>

using namespace std;

// Function Declaration
int add(int a, int b);

int main() {
    // Function Call
    int result = add(5, 4);
    cout << "Sum: " << result << endl;

    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}

// -----------------------------------------------------------------------

// * 2. Function Parameters and Return Types:

// Definition: Function parameters are variables used to pass values into a function. Return types specify the type of data a function returns.

// * Code:

// #include <iostream>

// using namespace std;

// // Function with parameters and return type
// int multiply(int x, int y) {
//     return x * y;
// }

// int main() {
//     int result = multiply(5, 3);
//     cout << "Product: " << result << endl;

//     return 0;
// }

// -----------------------------------------------------------------------

// * 3. Default Arguments:

// Definition: Default arguments allow providing default values for parameters. If a value is not passed, the default is used.

// * Code:

// #include <iostream>

// using namespace std;

// // Function with default arguments
// int power(int base, int exponent = 2) {
//     int result = 1;
//     for (int i = 0; i < exponent; ++i) {
//         result *= base;
//     }
//     return result;
// }

// int main() {
//     cout << "Default power: " << power(3) << endl;
//     cout << "Custom power: " << power(3, 4) << endl;

//     return 0;
// }

// -----------------------------------------------------------------------

// * 4. Function Overloading:

// Definition: Function overloading allows defining multiple functions with the same name but different parameter lists.

// * Code:

// #include <iostream>

// using namespace std;

// // Function Overloading
// int sum(int a, int b) {
//     return a + b;
// }

// double sum(double a, double b) {
//     return a + b;
// }

// int main() {
//     cout << "Sum of integers: " << sum(3, 4) << endl;
//     cout << "Sum of doubles: " << sum(3.5, 4.2) << endl;

//     return 0;
// }

// -----------------------------------------------------------------------

// * 5. Recursion:

// Definition: Recursion is a technique where a function calls itself. It is particularly useful for solving problems that can be broken down into smaller, similar subproblems.

// * Code:

// #include <iostream>

// using namespace std;

// // Recursive function
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     cout << "Factorial of 5: " << factorial(5) << endl;

//     return 0;
// }

// -----------------------------------------------------------------------

// * 6. Function Pointers:

// Definition: Function pointers are pointers that store addresses of functions. They can be used to invoke functions indirectly.

// * Code:

// #include <iostream>

// using namespace std;

// // Function
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     // Function pointer
//     int (*ptr)(int, int) = &add;

//     // Using function pointer
//     cout << "Sum: " << ptr(3, 4) << endl;

//     return 0;
// }


// * These examples cover various aspects of functions in C++, including declaration, definition, parameters, return types, default arguments, function overloading, recursion, and function pointers.