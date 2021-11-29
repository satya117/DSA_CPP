/*repeatdly swap to adjacent element if they are in wrong order*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    int arr[n],i;
    cout<<"Enter the ele: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //bubble sort - no passes = n-1 loop should run for n-1 times
    int pass = 1;
    while(pass<n){
        for(i=0;i<n-pass;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        pass++;
    }    

    cout<<"Elements after sorting"<<endl;
    //final array 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}