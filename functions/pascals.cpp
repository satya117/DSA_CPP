// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

/*Each in the form of icj==ncr*/

#include<iostream>
using namespace std;
int fact(int num){
    int i,factorial=1;
    for(i=2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}


int main(){

    int row,col;
    cout<<"Enter number of rows and cols:  "<<endl;
    cin>>row>>col;
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            int ans = fact(i)/(fact(j)*fact(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
        return 0;
}