/*
   union --- all the ele's of a and b (but the ele in final should be repeated)
   ex: A[] = {1,2,3,7,9} b[]={2,4,5,7,8,9}
   note that the arrays should be sorted
   use the concept merge two sorted array
*/

#include<iostream>
using namespace std;

void printUnion(int a[],int b[],int m,int n){

    int i=0,j=0;
    //required two pointer to test the conditions - i and j
    //and an array to store the uniion of a and b
    while(i<m && j<n){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }
        else if(a[i]==b[j]){
            cout<<b[j++]<<" ";
            i++;
        }

    }
    //if any ele left in either of the arra then 
    for(;i<m;i++){
        cout<<a[i]<<" ";
    }
    for(;j<n;j++){
        cout<<b[j]<<" ";
    }
}

int main(){
    int m,n;
    cout<<"Enter the size of arr's: "<<endl;
    cin>>m>>n;

    int a[m],b[n],i=0,j=0;
    cout<<"Enter ele: "<<endl;

    //array A
    for(i=0;i<m;i++)
        cin>>a[i];

    //array B
    for(j=0;j<n;j++)
        cin>>b[j];
    
    printUnion(a,b,m,n);
        return 0;
}