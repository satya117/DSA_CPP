/*Largest number among three*/
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numnbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"LARGEST :"<<a<<endl;
    }
    else if(b>c){
        cout<<"LARGEST :"<<b<<endl;
    }
    else{
        cout<<"LArgest :"<<c<<endl;
    }
    return 0;
}