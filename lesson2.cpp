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
    bool booleanVariable;
    int integerVariable;
    char characterVariable;
    float floatingPointVariable;
    double doubleFloatingPointVariable;
    wchar_t wideCharVariable;
    // The above are all the builtin datatypes in C++

    // The following are the default values of the above datatypes
    std::cout << "Boolean: " << booleanVariable << std::endl;
    std::cout << "Integer: " << integerVariable << std::endl;
    std::cout << "Character: " << characterVariable << std::endl;
    std::cout << "Floating Point: " << floatingPointVariable << std::endl;
    std::cout << "Double Floating Point: " << doubleFloatingPointVariable << std::endl;
    std::cout << "Wide Character: " << wideCharVariable << std::endl;
    // The above will print the default values of the above datatypes
    // The following are the sizes of the above datatypes
    std::cout << "Boolean: " << sizeof(booleanVariable) << std::endl;
    std::cout << "Integer: " << sizeof(integerVariable) << std::endl;
    std::cout << "Character: " << sizeof(characterVariable) << std::endl;
    std::cout << "Floating Point: " << sizeof(floatingPointVariable) << std::endl;
    std::cout << "Double Floating Point: " << sizeof(doubleFloatingPointVariable) << std::endl;
    std::cout << "Wide Character: " << sizeof(wideCharVariable) << std::endl;
    // The above will print the sizes of the above datatypes
    
};

