// Lesson 2: Datatypes
// Some other syntax conventions to know when studying C++

// Builtin datatypes
// Type:	                Keyword:
// Boolean	                bool
// Character	            char
// Integer	                int
// Floating point           float
// Double floating point	double
// Wide character	        wchar_t

#include <iostream>

int main(int argc, char* argv[]) {
    // The following are the datatypes that are built into C++
    bool booleanVariable;
    int integerVariable;
    char characterVariable;
    float floatingPointVariable;
    double doubleFloatingPointVariable;
    wchar_t wideCharVariable;

    // The following are the default values of the above datatypes
    std::cout << "Default Values" << std::endl;
    std::cout << "Boolean: " << booleanVariable << std::endl;
    std::cout << "Integer: " << integerVariable << std::endl;
    std::cout << "Character: " << characterVariable << std::endl;
    std::cout << "Floating Point: " << floatingPointVariable << std::endl;
    std::cout << "Double Floating Point: " << doubleFloatingPointVariable << std::endl;
    std::cout << "Wide Character: " << wideCharVariable << std::endl;

    // The following are the sizes of the above datatypes
    std::cout << std::endl << "Sizes" << std::endl;
    std::cout << "sizeof(Boolean): " << sizeof(booleanVariable) << std::endl;
    std::cout << "sizeof(Integer): " << sizeof(integerVariable) << std::endl;
    std::cout << "sizeof(Character): " << sizeof(characterVariable) << std::endl;
    std::cout << "sizeof(Floating Point): " << sizeof(floatingPointVariable) << std::endl;
    std::cout << "sizeof(Double Floating Point): " << sizeof(doubleFloatingPointVariable) << std::endl;
    std::cout << "sizeof(Wide Character): " << sizeof(wideCharVariable) << std::endl;

    // The following will assign values to the above datatypes
    booleanVariable = true; // true or false
    integerVariable = 1; // No suffix is required for integers
    characterVariable = 'a'; // Single quotes are used for characters
    floatingPointVariable = 3.14f; // The f suffix is required for floating point
    doubleFloatingPointVariable = 2.71828182; // The f suffix is not required for double floating point
    wideCharVariable = L'a'; // L is a prefix for wide characters

    // The following will print the values of the above datatypes
    std::cout << std::endl << "Values" << std::endl;
    std::cout << "Value of booleanVariable: " << booleanVariable << std::endl;
    std::cout << "Value of integerVariable: " << integerVariable << std::endl;
    std::cout << "Value of characterVariable: " << characterVariable << std::endl;
    std::cout << "Value of floatingPointVariable: " << floatingPointVariable << std::endl;
    std::cout << "Value of doubleFloatingPointVariable: " << doubleFloatingPointVariable << std::endl;
    std::cout << "Value of wideCharVariable: " << wideCharVariable << std::endl;
};

