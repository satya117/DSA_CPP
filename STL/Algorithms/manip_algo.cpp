/*To store all non-manipulationg algorithms
1)sort() - sort
2)reverse() - reverse vector
3)*max_element()  - max
4)*min_element() - min
5)accumulate() - sum
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> //for accumulate
using namespace std;

int main(){

    int arr[] = {2,5,1,0,43,2,9,4,14,5,23};
    //to get the size
    int n = sizeof(arr)/sizeof(arr[0]);

    //creating vector and copying arr to it
    vector<int> vect(arr,arr+n);

    //before sorting
    cout<<"Before sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;

    //applying sort
    sort(vect.begin(),vect.end());
    cout<<"After sorting and before Erasing: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;

    vect.erase(vect.begin()+2);
    cout<<"After Erasing: "<<endl;
    for(auto i:vect)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //remoning all duplicates
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
    cout<<"After erasing duplicates: "<<endl;
    for(auto i : vect){
        cout<<i<<" ";
    }

    

    return 0;
}