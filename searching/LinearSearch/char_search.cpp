/*Searching for char present in the string*/

#include<iostream>
using namespace std;

bool CharinString(string name,char target)
{
    if(name.length()==0)
        return false;
    for(int i=0;i<name.length();i++){
        if(name[i]==target)
            return true;
    }
    return false;
}


int main(){

    string name;
    cout<<"Enter the name: "<<endl;
    cin>>name;

    char target;
    cout<<"Enter the target char: "<<endl;
    cin>>target;

    cout<<"Char is present in the name: ";
    int ans=CharinString(name,target);
    (ans==1)?cout<<"True":cout<<"False";
    return 0;
}