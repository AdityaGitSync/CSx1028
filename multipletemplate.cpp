#include<iostream>
using namespace std;
template <typename T, typename U>
class test{
    private:
    T a;
    U b;
    public:
    test(T x,U y){
        a=x;
        b=y;
    }
   void display(){
        cout<<"a: "<<a<<" b: "<<b<<endl;
        cout<<"b: "<<b<<" a: "<<a<<endl;
    }
};
int main(){
    test<int,double> t1(10,20.5);
    t1.display();
    return 0;
}
