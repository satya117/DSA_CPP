/*Factorial of a number*/

#include<iostream>
using namespace std;
int fact(int n){
    int mul;
    if(n==1)
        return 1;
    else{
         mul=1;
        for(int i=2;i<=n;i++){
            mul*=i;
        }
    }
    return mul;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int ans = fact(n);
    cout<<"Factorial of a numbeR: "<<ans<<endl;
    return 0;
}