/*return the max- min ele in one scan */
#include<iostream>
using namespace std;

void Min_Max(int a[],int n){
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
        else if(a[i]>max)
            max = a[i];
    }
    cout<<"Min ele: "<<min<<endl;
    cout<<"Max ele: "<<max<<endl;
}

int main(){

    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the ele: "<<endl;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    //calling func
    Min_Max(a,n);
    return 0;
}