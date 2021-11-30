/*Search for the min  ele in an array*/

#include<iostream>
using namespace std;

int min(int arr[],int n)
{   
    int min = INT_MAX;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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
    
    cout<<"Min ele in an array: "<<min(arr,n)<<endl;

    return 0;
}