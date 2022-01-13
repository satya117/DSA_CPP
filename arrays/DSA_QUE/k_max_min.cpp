/*Return the kth smallest and largest in an array
arr = [7 10 4 3 20 15]
k = 3
min_k = 7
max_k = 10
idea: sort the ele and return the kth pos from front and n-k post from back
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an ele: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the elements: "<<endl;
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the pos: "<<endl;
    cin>>k;

    //sorting the ele
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            }
        }
    }

    cout<<"Min ele at kth pos: "<<a[k-1]<<endl;
    cout<<"Max ele at kth pos: "<<a[n-k]<<endl;

}
