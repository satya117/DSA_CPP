/*Search element in the given range*/
#include<iostream>
using namespace std;

int SearchRange(int a[],int n,int start, int end,int target)
{
    //for size==0 or end index choosen greater than equal to n
    if(n==0 || end>=n)
        return -1;
    //comparisons made from the given range
    for(int i=start;i<=end;i++){
        if(a[i]==target)
            return i;
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the ele: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cout<<"Enter the target ele: "<<endl;
    cin>>target;

    int start,end;
    cout<<"Enter start and end index: "<<endl;
    cin>>start>>end;

    cout<<"The index is "<<SearchRange(a,n,start,end,target);
    return 0;
}