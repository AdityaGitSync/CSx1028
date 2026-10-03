#include <iostream>
using namespace std;   //using namespace std; allows us to use cout and endl without the std:: prefix.(using directive)
int main() {
   //std::cout << "Hello, World!" << std::endl;
   //cout << "Hello, World!" << endl;

   int slice ;// Declare an integer variable named slice and initialize it with the value 5
   slice = 5; // Assign the value 5 to the variable slice (int slice = 5; is a declaration and initialization in one line, while slice = 5; is an assignment statement that assigns the value 5 to the already declared variable slice.)
   cout << "I have " << slice << " slices of pizza." << endl; 
   // user input
   int slices; // Declare an integer variable named slices
   cout << "How many slices of pizza do you want? "; // Prompt the user for input
   cin >> slices; // Read the user's input and store it in the variable slices
   cout << "You have requested " << slices << " slices of pizza." << endl;
    return 0;
}
