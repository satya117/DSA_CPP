/*Finding the length of the str without using strlen() function*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin>>str;
    //traversing through each char until str[i]=='\0(null char)
    int i,length=0;
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    cout<<"The length of the "<<str<<" "<<length;

    return 0;
}