#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float image;
    public:
    Complex(float r=0,float i=0){
        real=r;
        image=i;
    }
    void operator ++(){
        real++;
        image++;

    }
    void display(){
        cout<<"real "<<real << " + "<<" image "<<image<<endl;
    }
};
int main (){
    Complex c1(3,4);
    cout<<"Before increment: ";
    c1.display();
    ++c1;
    cout<<"After increment: ";
    c1.display();
    return 0;
}
