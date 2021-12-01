/*here str contains vowels, consonants and some special characters - without ignoring the case
task - is to count vowels and consonants
consonats - no special should be included
*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin>>str;
    //traversing through each char until str[i]=='\0(null char)
    int i,vowels_count=0,cons_count=0;
    for(i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]); // converting to lower
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowels_count++;
            
        }
        else if(str[i]>='a' && str[i]<='z'){
            cons_count++;
        }
    }
    cout<<"Vowels count: "<<vowels_count<<endl;
    cout<<"Consonant count: "<<cons_count<<endl;
    return 0;
}