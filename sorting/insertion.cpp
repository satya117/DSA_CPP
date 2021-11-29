/*Insert an elem  from unsorted array to its correct position in sorted array*/

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

    //insertion sort 
    int curr = 0;
    for(i=1;i<n;i++){
        int curr = arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }

    cout<<"Elements after sorting"<<endl;
    //final array 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}