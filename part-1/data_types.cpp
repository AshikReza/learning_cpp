#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
//  AInteger Types:
//  1. int: Integer type. Size: 4 bytes, Range: -2147483648 to 2147483647
    int integerVar;
    cout << "1. int: Integer type. Size: " << sizeof(int) << " bytes, Range: " 
         << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

//  2. short: Short integer modifier. Size: 2 bytes, Range: -32768 to 32767
    short shortVar;
    cout << "2. short: Short integer modifier. Size: " << sizeof(short) << " bytes, Range: " 
         << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;

//  3. long: Long integer modifier. Size: 4 bytes, Range: -2147483648 to 2147483647
    long longVar;
    cout << "3. long: Long integer modifier. Size: " << sizeof(long) << " bytes, Range: " 
         << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;

//  4. unsigned: Unsigned integer modifier. Size: 4 bytes, Range: 0 to 4294967295
    unsigned unsignedVar;
    cout << "4. unsigned: Unsigned integer modifier. Size: " << sizeof(unsigned) << " bytes, Range: 0 to " 
         << numeric_limits<unsigned>::max() << endl;

//  5. long long: Long long integer modifier. Size: 8 bytes, Range: -9223372036854775808 to 9223372036854775807
    long long longLongVar;
    cout << "5. long long: Long long integer modifier. Size: " << sizeof(long long) << " bytes, Range: " 
         << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;

//  Floating-Point Types:
//  6. float: Single-precision floating-point type. Size: 4 bytes
    float floatVar;
    cout << "6. float: Single-precision floating-point type. Size: " << sizeof(float) << " bytes" << endl;

//  7. double: Double-precision floating-point type. Size: 8 bytes
    double doubleVar;
    cout << "7. double: Double-precision floating-point type. Size: " << sizeof(double) << " bytes" << endl;

//  Character Type
//  8. char: Character type. Size: 1 byte
    char charVar;
    cout << "8. char: Character type. Size: " << sizeof(char) << " byte" << endl;

//  Boolean Type
//  9. bool: Boolean type. Size: 1 byte
    bool boolVar;
    cout << "9. bool: Boolean type. Size: " << sizeof(bool) << " byte" << endl;

//  Enumeration (Enum)
//  10. enum: Enumerated data type.
    enum ExampleEnum { VALUE1, VALUE2 };
    cout << "10. enum: Enumerated data type." << endl;

//  String Type
//  11. string: String type from the Standard Template Library (STL). Size: 24 bytes
    string strVar;
    cout << "11. string: String type from the Standard Template Library (STL). Size: " << sizeof(string) << " bytes" << endl;

    return 0;
}
