#include <iostream>
using namespace std;
// 1. No argument + No return value

void showTitle()

{

    cout << "===== STUDENT RESULT SYSTEM =====" << endl;

}

// 2. Argument + No return value

void displayStudent(string name, int rollNo)

{

    cout << "Name    : " << name << endl;

    cout << "Roll No : " << rollNo << endl;

}

// 3. No argument + Return value

int getTotal()

{

    int m1 = 85;

    int m2 = 78;

    int m3 = 92;

    return m1 + m2 + m3;

}

// 4. Argument + Return value

float calculatePercentage(int total, int subjects)

{

    return (float)total / (subjects * 100) * 100;

}

int main()

{

    // Type 1

    showTitle();

    // Type 2

    displayStudent("Aditya", 25);

    // Type 3

    int total = getTotal();

    // Type 4

    float percentage = calculatePercentage(total, 3);

    cout << "Total      : " << total << "/300" << endl;

    cout << "Percentage : " << percentage << "%" << endl;

    return 0;

}
