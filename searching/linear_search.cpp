/*Search for the key in the given array if found return the index else return return -1 */

#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    int index=-1,i=0;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            return index;
        }
    }
    return index;
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
    cout<<linearSearch(arr,n,key);

}