//  enum (enumeration) is a user-defined data type that consists of named integral constants. It provides a way to define a set of related named constants, making the code more readable and self-explanatory. Enums are often used to represent a set of distinct values that have a meaningful relationship.

#include <iostream>

using namespace std;

// Enum declaration
enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    // Using enum variable
    Weekday today = WEDNESDAY;

    // Switch statement with enum
    switch (today) {
        case MONDAY:
            cout << "It's Monday!" << endl;
            break;
        case WEDNESDAY:
            cout << "It's Wednesday!" << endl;
            break;
        default:
            cout << "It's another day." << endl;
    }

    return 0;
}
