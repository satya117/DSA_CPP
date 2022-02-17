/*Q) Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array from that position.*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reversearray(vector<int> &arr,int m){
    //using two pointer tech
    int i=m,j=arr.size()-1;
    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
    
}

int main()
{
    vector<int> arr = {1,2,3,4, 5,6,7,8};
    int n = arr.size();
    int m = 3; // position from where elements to reversed
    cout<<"The dulicate ele: "<<endl;
    reversearray(arr,m);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
