/*Check if given character is vowel or not*/
#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter a char: "<<endl;
    cin>>ch;
    ch = tolower(ch);
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<"Vowel"<<endl;
    else
        cout<<"Consonant"<<endl;
    return 0;

}