/*product of ele in an array*/

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

    //computing mul of ele
    int mul=1;
    for(i=0;i<n;i++){
        mul*=arr[i];
    }
    cout<<"product of ele: "<<mul<<endl;


    return 0;
}
