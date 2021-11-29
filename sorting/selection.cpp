/*Selection sort - find the minimum ele and swap with the beginning element*/

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

    //selection sort - outer loop runs for n-1 and inner loop runs for i+1 to n(for com and swap)
    int j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                //swapping 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Elements after swapping"<<endl;
    //final array 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}