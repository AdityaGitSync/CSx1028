#include<iostream>
using namespace std;
int main(){
    /*the const keyword is used to declare a constant variable in C++. 
    A constant variable is a variable whose value cannot be changed after it has been initialized. 
    Once a constant variable is assigned a value, it remains the same throughout the program.
    */
    const int MAX_VALUE = 100; // Declare a constant integer variable named MAX_VALUE and initialize it with the value 100
    cout << "The maximum value is: " << MAX_VALUE << endl; // Output the value of MAX_VALUE
    //MAX_VALUE = 200; // This line would cause a compilation error because MAX_VALUE is a constant and cannot be modified

    //double const PI = 3.14159; // Declare a constant double variable named PI and initialize it with the value 3.14159
    //cout << "The value of PI is: " << PI << endl; // Output the value of PI
    //PI = 3.14; // This line would cause a compilation error because PI is a constant and cannot be modified

    // double PI = 3.14159; // Declare a double variable named PI and initialize it with the value 3.14159
    // double radius = 5.0; // Declare a double variable named radius and initialize it with the value 5.0
    // double area = PI * radius * radius; // Calculate the area of a circle using the formula area = PI * radius^2
    // cout << "The area of the circle is: " << area << endl; // Output the calculated area of the circle


    const double PI = 3.14159; // Declare a constant double variable named PI and initialize it with the value 3.14159
    double radius = 5.0; // Declare a double variable named radius and initialize it with the value 5.0
    double area = PI * radius * radius; // Calculate the area of a circle using the formula area = PI * radius^2
    cout << "The area of the circle is: " << area << endl; // Output the calculated area of the circle

    return 0; // Return 0 to indicate successful execution of the program

}