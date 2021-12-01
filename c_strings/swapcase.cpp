/*here char(only aplhabets) in str is changed as if upppercase--> lowercase and lowercase-->uppercase
 special char remains same

 --> this same can be performed using 
 ---> tolower() and toupper() built in functions
*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin>>str;

    cout<<"String before swapping : "<<str<<endl;
    //traversing through each char until str[i]=='\0(null char)
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;        // 'a'-'A' = 32; - converts to lower
            
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;    // to upper
        }
    }
    cout<<"String after swaping the cases: "<<str<<endl;
    return 0;
}