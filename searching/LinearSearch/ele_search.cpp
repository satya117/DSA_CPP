/*Search for the ele exist in the array or not*/
#include<iostream>
using namespace std;

int LinearSearch(int a[],int target,int n){

    if(n==0){
        return -1;
    }
    //running loop to find the ele
    for(int i=0;i<n;i++){
        if(a[i]==target)
            return 1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the ele :"<<endl;

    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cout<<"Enter the target ele: "<<endl;
    cin>>target;
    int ans = LinearSearch(a,target,n);
    (ans==1)?cout<<"Element is found ":cout<<"Element is not found";



    return 0;
}