/*Check x,y,z form a pythagorian triangle or not*/
#include<iostream>
#include<cmath>
using namespace std;

bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b = x;
        c = z;
    }
    else{
        b=x,c=y;
    }
    if(a*a == (b*b+c*c))
        return true;
    else
        return false;

}

int main(){
    int x,y,z;
    cout<<"Enter 3 values: "<<endl;
    cin>>x>>y>>z;

    //if value is true the cout<
    if(check(x,y,z)){
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not a Pythagorean Triplet";
    }
    return 0;
}