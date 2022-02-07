#include<iostream>
#include<algorithm>
using namespace std;

void print(double arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    double arr[] = {1.1,9.9,3.3,2.5,8.5,4.2,5.3};

    //to get array size
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting: "<<endl;
    print(arr,size);

    //applying sort
    //ending points to next to the ending point
    sort(arr,arr+size,greater<double>());

    cout<<"after Sorting: "<<endl;
    print(arr,size);

    return 0;

}