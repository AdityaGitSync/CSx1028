#include<iostream>
using namespace std;
//function declaration syntax:- return_type function_name(parameter_list);
// Function declaration
int add(int a, int b) {
    return a + b; // Function definition
}


int main() {
    // function:- function is a block of code that performs a specific task. It can take input, process it, and return an output.
    // Functions help in organizing code, making it reusable, and improving readability.
    //creation of function
    // function declaration:- A function declaration tells the compiler about a function's name, return type
    // and parameters. It is also known as a function prototype. The declaration is usually placed in a header file or at the beginning of a source file.
    /* function definition:- A function definition provides the actual body of the function, including the code
    that will be executed when the function is called. It specifies what the function does and how it performs its task.
    */

    // function call:- A function call is an expression that invokes a function, causing the program to execute the code within that function. 
    // When a function is called, control is transferred to the function's body, and after execution, control returns to the point where the function was called.
    //fuction call syntax:- function_name(arguments);
    int result = add(5, 10); // Function call
    cout << "Result: " << result << endl;
}