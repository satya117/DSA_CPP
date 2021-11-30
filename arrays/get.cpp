/*get(index) - it returns the element at particular by checking is index valid or not*/

#include<iostream>
using namespace std;

int get(int arr[],int n,int index){
    if(index>=0 && index<n){
        return arr[index];
    }
    return -1; //index not found
}

int main(){
    int n;
    cout<<"Enter size of ele: "<<endl;
    cin>>n;
 
    int arr[n];
    int i;
    cout<<"Enter ele: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     int index;
     cout<<"Enter the index value: "<<endl;
     cin>>index;

    //calling get func
    cout<<"Element at index: "<<get(arr,n,index)<<endl;

    return 0;
}