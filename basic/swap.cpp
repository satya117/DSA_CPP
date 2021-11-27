/*Swap 2 numbers using 3rd variable*/
#include<iostream>
using namespace std;

int main(){
    int a=10,b=20;
    cout<<"Vales of a and b before swapping:  "<<a<<" "<<b<<endl;
    //swapping using 3rd variable
    int temp;
    temp = a;
    a=b;
    b = temp;

    cout<<"Values of a and b after swapping: "<<a<<" "<<b<<endl;
    return 0;

}