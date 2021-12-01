/*madam = reverse it we get madam so both are equal this is called aplindrome*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin>>str;
    //traversing through each char until i<j
    cout<<"The original string: "<<str<<endl;
    int i,j=strlen(str)-1,flag=0;
    for(i=0;i<j;i++,j--){
        if(str[i]!=str[j])
        {
            cout<<"String is not a palindrome"<<endl;
            flag++;
            break;
        }
    }
    if(flag==0)
    cout<<"string is palindrome"<<endl;

    return 0;
}