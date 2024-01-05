// * 1. Conditional Statements (if, else if, else):

// #include <iostream>

// using namespace std;

// int main() {
//     int num = 10;

//     if (num > 0) {
//         cout << "Number is positive." << endl;
//     } else if (num == 0) {
//         cout << "Number is zero." << endl;
//     } else {
//         cout << "Number is negative." << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------------
// * 2. Switch Statement:

// #include <iostream>

// using namespace std;

// int main() {
//     char grade = 'B';

//     switch (grade) {
//         case 'A':
//             cout << "Excellent!" << endl;
//             break;
//         case 'B':
//             cout << "Good job!" << endl;
//             break;
//         case 'C':
//             cout << "Satisfactory." << endl;
//             break;
//         default:
//             cout << "Need improvement." << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------------
// * 3. Looping Constructs (for, while, do-while):

#include <iostream>

using namespace std;

int main() {
    // For loop
    for (int i = 1; i <= 5; ++i) {
        cout << "Iteration: " << i << endl;
    }

    // While loop
    int count = 0;
    while (count < 3) {
        cout << "While loop iteration: " << count << endl;
        ++count;
    }

    // Do-while loop
    int n = 0;
    do {
        cout << "Do-while loop iteration: " << n << endl;
        ++n;
    } while (n < 3);

    return 0;
}

// ---------------------------------------------------------------
// * 4. Break and Continue Statements:

#include <iostream>

using namespace std;

int main() {
    // Break statement
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) {
            break;
        }
        cout << "Iteration " << i << endl;
    }

    // Continue statement
    for (int j = 1; j <= 5; ++j) {
        if (j == 3) {
            continue;
        }
        cout << "Iteration " << j << endl;
    }

    return 0;
}


// ---------------------------------------------------------------



