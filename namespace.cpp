#include<iostream>

namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main(){
    //Namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. 
    //Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
    //The std namespace is the standard namespace in C++ that contains all the standard C++ library functions and classes. 
    //It includes commonly used features such as input/output streams, containers, algorithms,
    //provides a solution to the problem of name collisions in large code bases by allowing you to group related functions, classes, and variables together under a unique name.
    //The std namespace is defined in the C++ Standard Library and is automatically included in every C++ program. 
    //To use the features of the std namespace, you can either prefix the names of the functions and classes with std:: or use the using directive to bring the entire namespace
    using namespace first; //using namespace std; allows us to use cout and endl without the std:: prefix.(using directive)



    int x=0; // Declare an integer variable 'x' in the global namespace and initialize it with the value 0
    std:: cout<< first::x<<std::endl; // Access the variable 'x' from the 'first' namespace and output its value (1)
    std:: cout<< second::x<<std::endl; // Access the variable 'x' from the 'second' namespace and output its value (2)
    std:: cout<< x<<std::endl; // Access the variable 'x' from the global namespace and output its value (0)


    using namespace std;//using namespace std; allows us to use cout and endl without the std:: prefix.(using directive)
    std::string name="MIT";// Declare a string variable 'name' in the global namespace and initialize it with the value "Bio"
    std::cout<<"hello "<<name<<std::endl;// Output the string "hello " followed by the value of 'name' and a newline character


    return 0;



}