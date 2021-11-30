/*avg of ele in an array
    avg = sum/n
        = sum of ele / number of ele
*/

#include<iostream>
#include<iomanip>
using namespace std;

double avg(int arr[],int n){
    //computing sum of ele
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    double avg = sum/n;
    return avg;
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

    cout<<"Avg of ele: "<<avg(arr,n)<<endl;


    return 0;
}