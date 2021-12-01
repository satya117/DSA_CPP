/*to count the words in the string 
 LOGIC: to count the spaces and return count+1
 if the string dont have beginning and ending spaces

*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin.getline(str,100);
    //traversing through each char until str[i]=='\0(null char)
    cout<<str[strlen(str)-1];
    int i,word=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i-1]!=' ' && i!=0){
            word++;
        }
    }

    cout<<"words in the str: "<<word+1<<endl;


    return 0;
}