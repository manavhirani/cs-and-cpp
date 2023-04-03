// Lesson 3: More on variables and data types, including strings, vectors, and arrays

// Include the iostream, string, and vector 
#include <iostream>
#include <string>
#include <vector>

int main() {
    // This is a string
    std::string stringVariable = "This is a string";
    // The std::string is in the format of namespace::object
    // The std::string is a class that is defined in the iostream library

    // This is a vector
    std::vector<int> vectorVariable = {1, 2, 3, 4, 5};

    // This is an array
    int arrayVariable[5] = {1, 2, 3, 4, 5};

    // This is a 2D array
    int array2DVariable[2][2] = {{1, 2}, {3, 4}};
    // The first index is the row, the second index is the column

    // This is a 3D array
    int array3DVariable[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    // The first index is the row, the second index is the column, the third index is the depth

    // Let's print out the values of the variables
    std::cout << "Values of the variables" << std::endl;
    std::cout << "stringVariable: " << stringVariable << std::endl;
    std::cout << "vectorVariable: " << vectorVariable[0] << ", " << vectorVariable[1] << ", " << vectorVariable[2] << ", " << vectorVariable[3] << ", " << vectorVariable[4] << std::endl;
    std::cout << "arrayVariable: " << arrayVariable[0] << ", " << arrayVariable[1] << ", " << arrayVariable[2] << ", " << arrayVariable[3] << ", " << arrayVariable[4] << std::endl;
    std::cout << "array2DVariable: " << array2DVariable[0][0] << ", " << array2DVariable[0][1] << ", " << array2DVariable[1][0] << ", " << array2DVariable[1][1] << std::endl;
    std::cout << "array3DVariable: " << array3DVariable[0][0][0] << ", " << array3DVariable[0][0][1] << ", " << array3DVariable[0][1][0] << ", " << array3DVariable[0][1][1] << ", " << array3DVariable[1][0][0] << ", " << array3DVariable[1][0][1] << ", " << array3DVariable[1][1][0] << ", " << array3DVariable[1][1][1] << std::endl;

    // Let's print the types of the variables
    std::cout << std::endl << "Types of the variables" << std::endl;
    std::cout << "stringVariable: " << typeid(stringVariable).name() << std::endl;
    std::cout << "vectorVariable: " << typeid(vectorVariable).name() << std::endl;
    std::cout << "arrayVariable: " << typeid(arrayVariable).name() << std::endl;
    std::cout << "array2DVariable: " << typeid(array2DVariable).name() << std::endl;
    std::cout << "array3DVariable: " << typeid(array3DVariable).name() << std::endl;

};