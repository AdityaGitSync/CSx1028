#include<iostream>
using namespace std;
template <typename T>
void sort(T arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

template <typename T>
void display(T arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[]={5,2,8,1,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1,n1);
    cout<<"Sorted integer array: ";
    display<int>(arr1,n1);

    double arr2[]={3.14,2.71,1.41,4.67};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr2,n2);
    cout<<"Sorted double array: ";
    display<double>(arr2,n2);

    char arr3[]={'Z','A','M','B'};
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    sort(arr3,n3);
    cout<<"Sorted char array: ";
    display<char>(arr3,n3);

    return 0;
}
