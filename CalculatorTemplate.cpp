#include<iostream>
using namespace std;
template <typename T>
class Calculator{
    private:
    T num1;
    T num2;
    public:
    Calculator(T n1,T n2){
        num1=n1;
        num2=n2;
    }
    T add(){
        return num1+num2;
    }
    T subtract(){
        return num1-num2;
    }
    T multiply(){
        return num1*num2;
    }
    T divide(){
        if(num2!=0){
            return num1/num2;
        }
        else{
            cout<<"Error: Division by zero"<<endl;
            return 0;
        }
    }
};
int main(){
    Calculator<int> calc1(10,5);
    cout<<"Addition: "<<calc1.add()<<endl;
    cout<<"Subtraction: "<<calc1.subtract()<<endl;
    cout<<"Multiplication: "<<calc1.multiply()<<endl;
    cout<<"Division: "<<calc1.divide()<<endl;
    return 0;
}   