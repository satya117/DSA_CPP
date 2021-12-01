/**validate user name - it should contains only aplhabets and digits
 --> it shouldnt contains any spl charachters
 ex : saty_123! - invalid
 ---> satya122 is valid 
 */

#include<iostream>
#include<cstring>
using namespace std;

int valid(char *str){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(!(str[i]>='a' && str[i]<='z') &&
            !(str[i]>'A' && str[i]<='Z') &&
            !(str[i]>='0' && str[i]<='9'))
            return 0;
    }
    return 1;
}
int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin>>str;
    if(valid(str)){
        cout<<"Valid String"<<endl;
    }else{
        cout<<"Invalid String"<<endl;
    }

    return 0;
}