//  1/ Bitwise AND (&):

//  Definition: Performs a bitwise AND operation between each pair of corresponding bits.

//  Use Case: This operation is often used for bit masking, where certain bits are selectively kept while others are cleared.

#include <iostream>

using namespace std;

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    cout << "Bitwise AND: " << (a & b) << endl;  // Output: Bitwise AND: 1

    return 0;
}

// --------------------------------------------------------------------------------

// 2/  Bitwise OR (|):

// Definition: Performs a bitwise OR operation between each pair of corresponding bits.

// Use Case: Useful for setting specific bits to 1, combining different flag values, or creating masks.


// #include <iostream>

// using namespace std;

// int main() {
//     int a = 5;  // Binary: 0101
//     int b = 3;  // Binary: 0011

//     cout << "Bitwise OR: " << (a | b) << endl;  // Output: Bitwise OR: 7

//     return 0;
// }

// --------------------------------------------------------------------------------


//  3/  Bitwise XOR (^):

//  Definition: Performs a bitwise XOR operation between each pair of corresponding bits.
//  Use Case: Toggling specific bits or determining the difference between two sets of bits.


// #include <iostream>

// using namespace std;

// int main() {
//     int a = 5;  // Binary: 0101
//     int b = 3;  // Binary: 0011

//     cout << "Bitwise XOR: " << (a ^ b) << endl;  // Output: Bitwise XOR: 6

//     return 0;
// }

// --------------------------------------------------------------------------------

//  4/ Bitwise NOT (~):

//  Definition: Inverts the bits of a variable.
//  Use Case: Useful for flipping all bits in a variable.


// #include <iostream>

// using namespace std;

// int main() {
//     int a = 5;  // Binary: 0101

//     cout << "Bitwise NOT: " << (~a) << endl;  // Output: Bitwise NOT: -6

//     return 0;
// }

// --------------------------------------------------------------------------------

// 5/  Left Shift (<<):

//  Definition: Shifts the bits of a variable to the left by a specified number of positions.
//  Use Case: Multiplying a number by a power of 2, or creating bit patterns for specific        applications.


// #include <iostream>

// using namespace std;

// int main() {
//     int a = 5;  // Binary: 0101

//     cout << "Left shift: " << (a << 1) << endl;  // Output: Left shift: 10

//     return 0;
// }

// --------------------------------------------------------------------------------

//  6/Right Shift (>>):

//  Definition: Shifts the bits of a variable to the right by a specified number of positions.
//  Use Case: Dividing a number by a power of 2, or extracting specific bit fields.


// #include <iostream>

// using namespace std;

// int main() {
//     int a = 5;  // Binary: 0101

//     cout << "Right shift: " << (a >> 1) << endl;  // Output: Right shift: 2

//     return 0;
// }