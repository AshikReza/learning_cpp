#include <iostream>
#include <limits>
#include <string>

using namespace std;

// * numeric_limits is a template class provided by the <limits> header, and it contains information about the properties of fundamental numeric types. 

// * ::min(): This is a member function of numeric_limits that returns the minimum representable value for the specified data type. In ::max() it returns the maximum representable value for the specified data type.

// * numeric_limits<  >::min(), the type inside the angle brackets (<  >) specifies the data type for which you want to obtain information about its numeric limits.

int main() {
//  Integer Types:
//  1. int: Integer type. Size: 4 bytes, Range: -2147483648 to 2147483647
    int integerVar; //  ? variable declaration 
    cout << "1. int: Integer type. Size: " << sizeof(int) << " bytes, Range: " 
         << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

    integerVar = 42; // ? assigning variable value
    cout << "int variable: " << integerVar << endl;

    cout << "------------------------------------" << endl;

//  2. short: Short integer modifier. Size: 2 bytes, Range: -32768 to 32767
    short shortVar; 
    cout << "2. short: Short integer modifier. Size: " << sizeof(short) << " bytes, Range: " 
         << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;

    shortVar = 32700;
    cout << "short variable: " << shortVar << endl;

    cout << "------------------------------------" << endl;

//  3. long: Long integer modifier. Size: 4 bytes, Range: -2147483648 to 2147483647
    long longVar;
    cout << "3. long: Long integer modifier. Size: " << sizeof(long) << " bytes, Range: " 
         << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;

    longVar = 2147483647;
    cout << "long variable: " << longVar << endl;

    cout << "------------------------------------" << endl;

//  4. unsigned: Unsigned integer modifier. Size: 4 bytes, Range: 0 to 4294967295
    unsigned unsignedVar;
    cout << "4. unsigned: Unsigned integer modifier. Size: " << sizeof(unsigned) << " bytes, Range: 0 to " 
         << numeric_limits<unsigned>::max() << endl;

    unsignedVar = 4294967295;
    cout << "unsigned variable: " << unsignedVar << endl;

    cout << "------------------------------------" << endl;

//  5. long long: Long long integer modifier. Size: 8 bytes, Range: -9223372036854775808 to 9223372036854775807
    long long longLongVar;
    cout << "5. long long: Long long integer modifier. Size: " << sizeof(long long) << " bytes, Range: " 
         << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;

    longLongVar = 9223372036854775807;
    cout << "long long variable: " << longLongVar << endl;

    cout << "------------------------------------" << endl;

//  Floating-Point Types:
//  6. float: Single-precision floating-point type. Size: 4 bytes
    float floatVar;
    cout << "6. float: Single-precision floating-point type. Size: " << sizeof(float) << " bytes" << endl;

    floatVar = 3.14f;
    cout << "float variable: " << floatVar << endl;

    cout << "------------------------------------" << endl;

//  7. double: Double-precision floating-point type. Size: 8 bytes
    double doubleVar;
    cout << "7. double: Double-precision floating-point type. Size: " << sizeof(double) << " bytes" << endl;

    doubleVar = 2.71828;
    cout << "double variable: " << doubleVar << endl;

    cout << "------------------------------------" << endl;

//  Character Type
//  8. char: Character type. Size: 1 byte
    char charVar;
    cout << "8. char: Character type. Size: " << sizeof(char) << " byte" << endl;

    charVar = 'A';
    cout << "char variable: " << charVar << endl;

    cout << "------------------------------------" << endl;

//  Boolean Type
//  9. bool: Boolean type. Size: 1 byte
    bool boolVar;
    cout << "9. bool: Boolean type. Size: " << sizeof(bool) << " byte" << endl;

    boolVar = true;
    cout << "bool variable: " << boolVar << endl;

    cout << "------------------------------------" << endl;

//  Enumeration (Enum)
//  10. enum: Enumerated data type.
    cout << "10. enum: Enumerated data type." << endl;

    enum ExampleEnum { VALUE1 = 60, VALUE2 = 70 };
    ExampleEnum enumVar = VALUE2;
    cout << "enum variable: " << enumVar << endl;

    cout << "------------------------------------" << endl;

//  String Type
//  11. string: String type from the Standard Template Library (STL). Size: 24 bytes
    string strVar;
    cout << "11. string: String type from the Standard Template Library (STL). Size: " << sizeof(string) << " bytes" << endl;

    strVar = "Hello, World!";
    cout << "string variable: " << strVar << endl;

    return 0;
}
