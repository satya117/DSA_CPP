#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {1,5,4,3,2,10,22};

    cout<<"Elements are: "<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    //use of sort function
    //original vector get sorted
    sort(v.begin(),v.end());
    cout<<"Elements after sorting: "<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    //using reverse function - reverse ele present in the vector
    reverse(v.begin(),v.end());
    cout<<"Elements after reversing: "<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
