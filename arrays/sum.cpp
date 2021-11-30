/*Sum of ele in an array*/

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

    //computing sum of ele
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of ele: "<<sum<<endl;


    return 0;
}