/*Fibonaciii seq upto n series*/

#include<iostream>
using namespace std;

void fib(int n){
    int a=0,b=1;
    int temp;

    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        temp = a+b;
        a=b;
        b = temp;
    }
}
int main(){

    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    fib(n);
    return 0;
}