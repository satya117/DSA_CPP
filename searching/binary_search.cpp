/*Efficient search algo*/
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            h = mid-1;
        else  
            l = mid+1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of an arr: "<<endl;
    cin>>n;
    int arr[n],i;
    cout<<"Enter the ele: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search: "<<endl;
    cin>> key;
    cout<<BinarySearch(arr,n,key);
}