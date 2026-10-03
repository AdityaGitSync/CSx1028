#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    public:
    float real;
    float image;
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.image=image+c.image;
        return temp;
        
    }
    void display(){
        cout<<"real "<<real << " + "<<" image "<<image<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.real=3.5;
    c1.image=2.5;
    c2.real=1.5;
    c2.image=4.5;
    c3=c1+c2;
    c3.display();
    return 0;
}
