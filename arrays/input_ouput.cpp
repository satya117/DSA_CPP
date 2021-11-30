#include<iostream>
using namespace std;

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

    cout<<"Elements are: "<<endl;
    //printing the ele
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}