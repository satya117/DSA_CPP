/*Reverse given array*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the elements in an array: "<<endl;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Elements before reversing: "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    cout<<"Elements after reversing: "<<endl;
    int j=n-1;

    for(i=0;i<j;i++,j--){
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}