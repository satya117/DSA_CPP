#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year: "<<endl;
    cin>>year;

    if(year%400==0 || (year%4==0 && year%10!=0)){
        cout<<"Leap Year"<<endl;
    }
    else
        cout<<"Not a leap Year"<<endl;
    return 0;
}