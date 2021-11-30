/*set(index,value) function  replaces the value at specified index*/

#include<iostream>
using namespace std;

void set(int arr[],int n,int index,int value){
    if(index>=0 && index<n){
        arr[index]=value;
    }
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

    cout<<"Ele before set func: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     int index,value;
     cout<<"Enter the index value: "<<endl;
     cin>>index>>value;

    //calling set func
    set(arr,n,index,value);
    cout<<"Ele after set func: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}