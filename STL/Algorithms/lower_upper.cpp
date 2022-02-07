#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int arr[] = {5,10,12,15,20,23,42,45,50};

    //size
    int n = sizeof(arr)/sizeof(arr[0]);

    //vect creation
    vector<int> vect(arr,arr+n);

    //lowerbound = returns index which is greater than equal to
    cout<<"Lower_bound: "<<endl;
    cout<<"Searching for 20 and is at index: ";
    auto p = lower_bound(vect.begin(),vect.end(),20)-vect.begin();
    cout<<p<<endl;
    //returns greater ele
    cout<<"Searching for 44 and is at index: "<<lower_bound(vect.begin(),vect.end(),44)-vect.begin()<<endl;
    //always points to the vect.end() if element is not present
    cout<<"Searching for 55 and is at index: "<<lower_bound(vect.begin(),vect.end(),55)-vect.begin()<<endl;


    cout<<"================================================================================================="<<endl;
    //upperbound
    cout<<"Upper_bound"<<endl;
    cout<<"Searching for 20 and is at index: "<<upper_bound(vect.begin(),vect.end(),20)-vect.begin()<<endl;
    cout<<"Searching for 44 and is at index: "<<upper_bound(vect.begin(),vect.end(),44)-vect.begin()<<endl;
    cout<<"Searching for 55 and is at index: "<<upper_bound(vect.begin(),vect.end(),55)-vect.begin()<<endl;

}