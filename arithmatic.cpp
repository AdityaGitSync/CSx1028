#include<iostream>
 
int main(){

    //arithmetic operators are used to perform mathematical operations on numeric values.
    //The basic arithmetic operators in C++ are:
    //Addition (+): Adds two operands together.
    //Subtraction (-): Subtracts the right operand from the left operand.
    //Multiplication (*): Multiplies two operands together.
    //Division (/): Divides the left operand by the right operand.
    //Modulus (%): Returns the remainder of the division of the left operand by the right operand. (only works with integers)
    //Increment (++): Increases the value of the operand by 1.
    //Decrement (--): Decreases the value of the operand by 1   
    //Example of arithmetic operators in C++
    int a = 10; // Declare an integer variable 'a' and initialize it with the value 10
    int b = 3; // Declare an integer variable 'b' and initialize it with the value 3
    int c = a + b; // Declare an integer variable 'c' and initialize it with the sum of 'a' and 'b'
    std::cout << "Sum: " << c << std::endl; // Output the value of 'c'
    std::cout << "Difference: " << a - b << std::endl; // Output the difference of 'a' and 'b'
    std::cout << "Product: " << a * b << std::endl; // Output the product of 'a' and 'b'
    std::cout << "Quotient: " << a / b << std::endl; // Output the quotient of 'a' and 'b'
    std::cout << "Remainder: " << a % b << std::endl; // Output the remainder of 'a' divided by 'b'
    std::cout << "Increment: " << ++a << std::endl; // Increment 'a' by 1 and output the new value of 'a'
    std::cout << "Decrement: " << --b << std::endl; // Decrement 'b' by 1 and output the new value of 'b'


    int student1_marks = 85; // Declare an integer variable 'student1_marks' and initialize it with the value 85
    int student2_marks = 78; // Declare an integer variable 'student2_marks' and initialize it with the value 78
    int student3_marks = 92; // Declare an integer variable 'student3_marks' and initialize it with the value 92
    int total_marks = student1_marks + student2_marks + student3_marks; // Calculate the total marks of three students and store it in the variable 'total_marks'
    std::cout << "Total Marks: " << total_marks << std::endl; // Output the value of 'total_marks'



    //parathesis are used to group expressions and control the order of operations in arithmetic calculations.
    //multiplication and division have higher precedence than addition and subtraction, so they are performed first.
    int result = (a + b) * c; // Calculate the result of the expression (a + b) * c and store it in the variable 'result'
    std::cout << "Result: " << result << std::endl; // Output the value of 'result' 
    return 0;
}