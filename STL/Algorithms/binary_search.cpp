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

    int arr[10] = {2,4,12,1,10,7,8,4,3,22};

    //to get array size
    int size = sizeof(arr)/sizeof(arr[0]);

    //applying sort
    //ending points to next to the ending point
    sort(arr,arr+size);
    cout<<"after Sorting: "<<endl;
    print(arr,size);

    //applying binary search
    //searching for 2
    cout<<binary_search(arr,arr+10,22)<<endl;
    if(binary_search(arr,arr+10,2)){
        cout<<"Element is found!!"<<endl;
    }
    else{
        cout<<"Element is not found!!"<<endl;
    }

    //searching for 50
    if(binary_search(arr,arr+10,50)){
        cout<<"Element is found!!"<<endl;
    }
    else{
        cout<<"Element is not found!!"<<endl;
    }

    return 0;

}