/*
   intersection - common ele between both are printed as output
   ex: A[] = {1,2,3,7,9} b[]={2,4,5,7,8,9}
   note that the arrays should be sorted
   use the concept merge two sorted array
*/

#include<iostream>
using namespace std;

void printIntersection(int a[],int b[],int m,int n){

    int i=0,j=0;
    //required two pointer to test the conditions - i and j
    while(i<m && j<n){
        if(a[i]==b[j]){
            cout<<b[j++]<<" ";
            i++;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;

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
    
    printIntersection(a,b,m,n);
        return 0;
}