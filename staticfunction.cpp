#include<iostream>
using namespace std;
class student{
    private:
    string name;
    static int totalstudents;
    public:
    student(string n){
        name=n;
        totalstudents++;
    }
    static int gettotalstudents(){
        return totalstudents;
    }
};
int student::totalstudents=0;
int main(){
    student s1("John");
    student s2("Alice");
    cout<<"Total students: "<<student::gettotalstudents()<<endl; 
    return 0;   
}