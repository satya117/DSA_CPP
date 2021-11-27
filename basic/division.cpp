/*Find the quotient and remainder of numbers*/
#include<iostream>
using namespace std;

int main(){
    int divisor,dividend;
    cout<<"Enter 2 number: "<<endl;
    cin>>divisor>>dividend;
    cout<<"Quotient: "<<dividend/divisor<<endl;
    cout<<"Remainder: "<<dividend%divisor<<endl;
    return 0;
}