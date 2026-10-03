#include<iostream>
using namespace std;
template <typename T>
T biggest(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<biggest(10,20)<<endl;
    cout<<biggest(10.5,20.5)<<endl;
    cout<<biggest('A','B')<<endl;
    return 0;
}
