/*Move all the negative elements to one side of the array
 --> USINF 2 POINTERS I AND J 

*/

#include<iostream>
#include<algorithm>
using namespace std;
//method 1
void method1(int a[],int n){
    int i = 0,j = n-1;
    while(i<j){
        if(a[i]<0)i++;
        if(a[i]>0 && a[j]<0){
            swap(a[i],a[j]);
            i++,j--;
        }
    }

}
int main(){

    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n],i=0;
    for(i=0;i<n;i++)
        cin>>a[i];

    //calling method 1
    method1(a,n);

    cout<<"Elements after swapping: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}