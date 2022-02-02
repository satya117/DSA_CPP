#include<iostream>
using namespace std;

int BinarySearch(int a[],int target,int start,int end){
    //start<=end 
    // if start>end element is not found
    while(start<=end){

        //to control over flow
        int mid = start+(end-start)/2;

        //middle ele is equal to target or no
        if(a[mid]==target)
            return mid; // return mid ele

        else if(a[mid]<target) // target lies to right 
            start = mid+1;
        else 
            end = mid-1;  //element lies to the left
    }
    //if no ele is found
    return -1;
}


int main(){

    int arr[] = {-2,2,4,5,7,8,9,10};
    //to find the size of an array
    int n = sizeof(arr) / sizeof(arr[0]);
    // start and end points
    int start = 0,end=n-1;
    //ele to find
    int target = 10;

    cout<<"Element at the index: "<<BinarySearch(arr,target,start,end);
    return 0;
}