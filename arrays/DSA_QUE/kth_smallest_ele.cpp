/*Given an array arr[] and an integer K where K is smaller than size of array, 
 the task is to find the Kth smallest element in the given array.
 It is given that all array elements are distinct.*/

 /*method 1: To sort and return the k-1 position value
 */
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 int Method_1(vector<int> v,int n,int k){
     sort(v.begin(),v.end());
     return v[k-1];
 }
int main(){

    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the ele: "<<endl;
    int i;
    for(i=0;i<n;i++){
        cin>>v[i];
        //v.push_back(v[i]);
    }
    int k;
    cout<<"Enter the k value: "<<endl;
    cin>>k;

    cout<<"The Kth smallest value: "<<Method_1(v,n,k)<<endl;

    return 0;
}