/*should return the len of max word in the string 
ex: hello satyavani
o/p: satyavani has max wordlen
to return len(satyavani)
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter a string: "<<endl;
    cin.getline(str,100);
    //traversing through each char until str[i]=='\0(null char)
    int i,max_len=0,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' || str[i]=='\0'){
            count=0;
        }
        else{
                count++;
                max_len = max(max_len,count);
        }
    }
    cout<<"Length of max word: "<<max_len<<endl;
    
    return 0;
}