#include<iostream>
#include<vector>


//typedef std::vector<std::pair<std::string, int>> pairList; // Create an alias 'pairList' for a vector of pairs containing a string and an integer

typedef std::string text_t;
typedef int number_t;

int main(){
    //typedef=reversed keyword used to create an alias for a data type. 
    //It allows you to define a new name for an existing data type, making the code more readable and easier to understand.


    // typedef unsigned int uint; // Create an alias 'uint' for the data type 'unsigned int'
    // uint age = 25; // Declare a variable 'age' of type 'uint'
    // typedef std::vector<std::pair<std::string, int>> pairList;
    // pairList parilist;


    text_t firstName = "John"; // Declare a variable 'firstName' of type 'text_t' (which is an alias for std::string)
    number_t age = 30; // Declare a variable 'age' of type 'number_t' (which is an alias for int)   

    std::cout << "Name: " << firstName << std::endl; // Output the value of 'firstName'
    std::cout << "Age: " << age << std::endl; // Output the value of 'age'
     return 0;












}