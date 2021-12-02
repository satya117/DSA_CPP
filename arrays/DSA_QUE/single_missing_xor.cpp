/*
    single missing ele - using xor of 1-n ele =x1
    - xor op of arr=x2
    x = x1^x2(gives the missing ele)
    proof (1^1 = 0)
*/
/*
Single missing ele in sorted or unsorted array:  
using method 1: sum of first n natural numbers - n(n+1)/2
where n is the nth term of the seq if sorted
else the max ele in the array
traverse the array and calculate the sum
---> finally subtract sum from n(n+1)/2
*/

#include<iostream>
using namespace std;

int MissingEle(int x,int a[])
{
    int x1=1,x2=a[0],i;

    for(i=2;i<=x+1;i++){  //x+1 = largest ele
        x1 = x1^i;
    }
    for(i=1;i<x;i++){
        x2 = x2^a[i];
    }
    int missing_ele = x1^x2;
    return missing_ele;

}
int main(){
    int n;
    cout<<"Enter the size:  "<<endl;
    cin>>n;

    int a[n];
    int i;
    cout<<"Enter the ele: "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"The missing ele: "<<MissingEle(n,a)<<endl;
    return 0;
}