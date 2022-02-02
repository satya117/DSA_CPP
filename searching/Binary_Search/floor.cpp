/*Return a number which is less than or equal to target*/
#include<iostream>
using namespace std;

int FloorBS(int a[],int target,int start,int end){
    //start<=end 
    // if start>end element is not found
    while(start<=end){

        //to control over flow
        int mid = start+(end-start)/2;

        //middle ele is equal to target or no
        if(a[mid]==target)
            return a[mid]; // return mid ele

        else if(a[mid]<target) // target lies to right 
            start = mid+1;
        else 
            end = mid-1;  //element lies to the left
    }
    //if no ele is found
    return a[end];
}


int main(){

    int arr[] = {-2,2,4,5,7,12,21,30};
    //to find the size of an array
    int n = sizeof(arr) / sizeof(arr[0]);
    // start and end points
    int start = 0,end=n-1;
    //ele to find
    int target = 20;

    cout<<"Element at the index: "<<FloorBS(arr,target,start,end);
    return 0;
}