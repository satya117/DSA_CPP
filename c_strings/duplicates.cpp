/*Print all the duplicates in the input string
 ex: satyavani
 op: a = 3
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;

    //using hashing tech 
    // no of alphabets = 26
    int freq[26]={0};
    int i,n=s.length();
    for(i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    int count=0;
    for(i=0;i<26;i++){
        if(freq[i]>1){
            count++;
        }
    }
    cout<<"No. of duplicates: "<<count;

}