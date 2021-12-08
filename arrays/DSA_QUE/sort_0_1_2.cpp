/*Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
 ex: arr = [0,2,1,2,0]
 o/p : [0,0,1,2,2]
 // using l=0,h=n-1,mid=0 
 --> all zeros lies to left of 1's and 2's lie right to the 1's
 --> taking 1 as mid too seperate

*/

#include<iostream>
using namespace std;

void method1(int a[],int n){
    int zero=0,one=0,two=0;
    int i=0;
    for(i=0;i<n;i++){
        if(a[i]==0)zero++;
        else if(a[i]==1)one++;
        else if(a[i]==2)two++;
    }
    //cout<<zero<<" "<<one<<" "<<two;

    //printing 
    for(i=0;i<zero;i++)
        cout<<0<<" ";
    for(i=0;i<one;i++)
        cout<<1<<" ";
    for(i=0;i<two;i++)
        cout<<2<<" ";
}

//swap func
void swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b = t;
}

//method 2 
void method2(int a[],int n){
    int l = 0,h = n-1,mid=0;
    while(mid<=h){
        switch(a[mid]){
            case 0:
                swap(&a[l],&a[mid]);
                l++,mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&a[mid],&a[h]);
                h--;
                break;
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

    //calling method 2
    method2(a,n);

    cout<<"Elements after swapping: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}