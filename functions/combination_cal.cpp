/*Calculate the ncr = n!/(n-r)!r!*/

#include<iostream>
using namespace std;
int fact(int num){
    int i,factorial=1;
    for(i=2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}


int main(){

    int n,r;
    cout<<"Enter the values of n and r: "<<endl;
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<"ncr: "<<ans<<endl;
    return 0;
}