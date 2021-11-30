/*Search for the max ele in an array*/

#include<iostream>
using namespace std;

int max(int arr[],int n)
{   
    int max = INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
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
    
    cout<<"Max ele in an array: "<<max(arr,n)<<endl;

    return 0;
}