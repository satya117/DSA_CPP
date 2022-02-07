#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {2,4,12,1,10,7,8,4,3,22};

    //to get array size
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting: "<<endl;
    print(arr,size);

    //applying sort
    //ending points to next to the ending point
    sort(arr,arr+size);

    cout<<"after Sorting: "<<endl;
    print(arr,size);

    return 0;

}