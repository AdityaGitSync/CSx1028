#include<iostream>
using namespace std;
class circle{
    //  private:
    // float r; // why is wrong:-
    public:
    float r;
    float area(){
        return r*r*3.14;
    }
};
int main (){
    circle c;
    c.r=5;
    cout<<"area: "<<c.area();
    return 0;
}