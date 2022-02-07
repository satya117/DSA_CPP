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

    int arr[] = {2,4,12,1,2,7,2,2,3,22};

    //to get array size
    int size = sizeof(arr)/sizeof(arr[0]);

    //creating vector
    vector<int> vect(arr,arr+size);

    //counting the occurenece of 2
    cout<<"Occurence of 2: "<<count(vect.begin(),vect.end(),2)<<endl;

    //find the ele
    cout<<"Finding the ele 10 in vector: "<<endl;
    find(vect.begin(),vect.end(),10)!=vect.end()?cout<<"Element is found":cout<<"Element is not found";
    return 0;

}