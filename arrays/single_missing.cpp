/*Finding the single missing ele in a first n natural numbers - sorted
 ex - arr[10] = {1,2,3,4,5,7,8,9,10,11};
 here the missing ele is 6 
 can be found using n(n-1)/2 - sum
 sum = sum of array arr
 the diff gives u the missing ele
 here we know the nth ele arr[n-1]
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
    //find the missing ele
    int sum_all = arr[n-1]*(arr[n-1]+1)/2;
    //traver through to find the sum
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    int missing_ele = sum_all-sum;
    cout<<"The missing ele: "<<missing_ele<<endl;
    return 0;
}