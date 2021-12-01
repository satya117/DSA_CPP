/*reverse the string without reverse traversing the array*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin>>str;
    //traversing through each char until i<j
    cout<<"The original string: "<<str<<endl;
    int i,j=strlen(str)-1;
    for(i=0;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout<<"string after reversing : "<<str<<endl;

    return 0;
}