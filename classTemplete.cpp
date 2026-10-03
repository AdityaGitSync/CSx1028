#include<iostream>
using namespace std;
template <typename T>
class marks{
    private:
    T mark1;
    T mark2;
    public:
    marks(T m1, T m2){
        mark1=m1;
        mark2=m2;
    }
    T total(){
        return mark1+mark2;
    }

};
int main(){
    marks<int> m1(57,56);
    cout<<"Total marks of student 1: "<<m1.total()<<endl;
    marks<double> m2(78.5,89.5);
    cout<<"Total marks of student 2: "<<m2.total()<<endl;
    return 0;}
