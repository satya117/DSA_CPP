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

    int arr[] = {2,5,1,0,43,22,90,4,14,56,23};
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
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;

    //applying reverse
    reverse(vect.begin(),vect.end());
    cout<<"After reversing: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;

    //finding the max ele in vector
    int max_ele = *max_element(vect.begin(),vect.end());
    cout<<"Max ele in vector: "<<max_ele<<endl;

    //find the min ele in vector
    int min_ele = *min_element(vect.begin(),vect.end());
    cout<<"Min ele in vector: "<<min_ele<<endl;

    //sum of elements in vectors
    int sum = accumulate(vect.begin(),vect.end(),0);
    cout<<"Sum of ele in vector: "<<sum<<endl;

    return 0;
}