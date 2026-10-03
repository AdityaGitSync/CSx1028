#include<iostream>
using namespace std;
template <typename T>
class Swap{
    public:
    T a;
    T b;
    Swap(T x,T y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
};
// template <typename T>
// T Swap(T &a,T &b){
//     T temp;
//     temp=a;
//     a=b;
//     b=temp;
//}
int main(){
    cout<<"Before swap: ";
    int x=10,y=20;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    Swap<int> s1(x,y);
    s1.display();
    cout<<"After swap: ";
    cout<<"x: "<<x<<" y: "<<y<<endl;
    cout<<"Before swap: ";
    double a=10.5,b=20.5;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    Swap<double> s2(a,b);
    s2.display();
    cout<<"After swap: ";
    cout<<"a: "<<a<<" b: "<<b<<endl;
    cout<<"Before swap: ";
    char c1='A',c2='B';
    cout<<"c1: "<<c1<<" c2: "<<c2<<endl;
    Swap<char> s3(c1,c2);
    s3.display();
    cout<<"After swap: ";
    cout<<"c1: "<<c1<<" c2: "<<c2<<endl;
    return 0;
}
