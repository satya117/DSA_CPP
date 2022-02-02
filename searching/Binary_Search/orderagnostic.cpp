/*To check whether ele are in sorted in asc or desc order*/
#include<iostream>
using namespace std;

int BinarySearch(int a[],int target,int n){
    // start and end points
    int start = 0,end=n-1;
    //start<=end 
    // if start>end element is not found
    bool IsAsc = a[start]<a[end];
    while(start<=end){

        //to control over flow
        int mid = start+(end-start)/2;

        //middle ele is equal to target or no
        if(a[mid]==target)
            return mid; // return mid ele

        //if ascending
        if(IsAsc){
            if(a[mid]<target) // target lies to right 
            start = mid+1;
            else 
            end = mid-1;  //element lies to the left
        }
        
        //descending order
        else{
            if(a[mid]>target) 
            start = mid+1;
            else 
            end = mid-1;  
        }


    }
    //if no ele is found
    return -1;
}


int main(){

    int arr[] = {-2,2,4,5,7,8,9,10};//array in asc
    int arr2[] = {10,8,5,4,3,2,-1,-11};//ar in desc
    //to find the size of an array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    //ele to find
    int target = 10;

    cout<<"Element at the index: "<<BinarySearch(arr,target,n)<<endl;

    cout<<"Element at the index: "<<BinarySearch(arr2,target,n);
    return 0;
}