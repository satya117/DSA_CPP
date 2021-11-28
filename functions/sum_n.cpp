/*Sum of n natural numbers: */

#include<iostream>
using namespace std;
int sum(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){

    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int ans = sum(num);
    cout<<"Sum of n natural numbers: "<<ans<<endl;
    return 0;

}