#include<iostream>

int main(){
    // Type conversion is the process of converting a value from one data type to another.
    // There are two types of type conversion in C++: implicit and explicit.
    // Implicit type conversion (also known as type casting) is performed automatically by the compiler when it encounters an expression that involves different data types. 
    // For example, if you add an integer and a floating-point number, the integer will be implicitly converted to a floating-point number before the addition takes place.
    // Explicit type conversion (also known as type casting) is performed manually by the programmer using a cast operator. 
    // For example, you can explicitly convert an integer to a floating-point number using the static_cast operator.


    int a = 10; // Declare an integer variable 'a' and initialize it with the value 10
    double b = 3.14; // Declare a double variable 'b' and initialize it with the value 3.14
    double c = a + b; // Implicit type conversion: 'a' is implicitly converted to a double before the addition takes place
    std::cout << "The result of adding an integer and a double is: " << c << std::endl; // Output the value of 'c'
    double d = static_cast<double>(a); // Explicit type conversion: 'a' is explicitly converted to a double using the static_cast operator
    std::cout << "The value of 'a' after explicit type conversion to double is: " << d << std::endl; // Output the value of 'd'


    char x=100;
    int y=x; // Implicit type conversion: 'x' is implicitly converted to an integer before the assignment takes place
    std::cout<<"The value of 'y' after implicit type conversion from char to int is: "<<y<<std::endl; // Output the value of 'y'
    int z=static_cast<int>(x); // Explicit type conversion: 'x' is explicitly converted to an integer using the static_cast operator
    std::cout<<"The value of 'z' after explicit type conversion from char to int is: "<<z<<std::endl; // Output the value of 'z'


    int correct =8;
    int question=10;
    double score = correct/(double)question*100; // Explicit type conversion: 'question' is explicitly converted to a double using the static_cast operator
    std::cout<<"The score is: "<<score<<std::endl; // Output the value of 'score'

    
    return 0; // Return 0 to indicate successful execution of the program
}