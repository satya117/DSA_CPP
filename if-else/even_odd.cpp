/*Number entered is even or odd*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"Even";
    }
    else
        cout<<"odd";
return 0;
}