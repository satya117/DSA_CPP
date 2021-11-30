/*Reverse ele in an array using for loop and two pointer
----> here we swap ele in array until i==j
*/

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
    cout<<endl;

    //interchnaging the ele
    int j=n-1;
    for(i=0,j;i>j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
    }

    cout<<"Elements in reverse order: "<<endl;
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}