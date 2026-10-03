#include<iostream>

//cout>> is an object of the ostream class that represents the standard output stream in C++.
//It is used to display output on the console or terminal. The '<<' operator is used to send data to the output stream,
// allowing you to print text, variables, and other information

//cin>> is an object of the istream class that represents the standard input stream in C++.
//It is used to read input from the console or terminal. The '>>' operator is used to extract data from the input stream, 
//allowing you to read user input and store it in variables

int main(){

    std::string name; // Declare a string variable 'name' to store the user's name
    std::getline(std::cin, name); // Read a line of text from the standard input (console) and store it in the variable 'name'
    std::cout << "Enter your name: "; // Prompt the user to enter their name
    std::getline(std::cin, name); // Read a line of text from the standard input (console) and store it in the variable 'name'
    std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl; // Output a greeting message that includes the user's name




    return 0;
}