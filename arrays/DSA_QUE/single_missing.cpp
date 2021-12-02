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
    int missing_num,sum=0,total=0;
    int n = a[x-1];
    total = n*(n+1)/2;
    for(int i=0;i<x;i++){
        sum+=a[i];
    }
    missing_num = total-sum;
    return missing_num;

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