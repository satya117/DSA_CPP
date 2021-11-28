/*binary to decimal*/
/*Octal to decimal*/
/*Hexadeciaml to decimal*/


#include<iostream>
using namespace std;
int binarytoDecimal(int n){
    int ans=0;
    int x=1;//2 * power(zero) = 1
    while(n>0){
        int y = n%10;
        ans += y*x;
        x *=2;
        n/=10;
    }
    return ans;
}

int octaltoDecimal(int n){
    int ans =0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += y*x;
        x*=8;
        n/=10;
    }
    return ans;
}

int hexadecimaltodecimal(string n){
    int x=1;
    int i,s,ans=0;
    s = n.size();
    //reverse
    for(i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+= x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int decimaltobinary(int n){
    int x=1,ans=0;
    while(x<=n)
        x*=2;
    x/=2;

    while(x>0){
        int last_digit = n/x;
        n -= last_digit*x;
        ans = ans*10+last_digit;
        x/=2;
    }
    return ans;
}

int decimaltooctal(int n){
    int x=1,ans=0;
    while(x<=n)
        x*=8;
    x/=8;

    while(x>0){
        int last_digit = n/x;
        n -= last_digit*x;
        ans = ans*10+last_digit;
        x/=8;
    }
    return ans;
}

string decimaltoHexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n)
        x*=16;
    x/=16;

    while(x>0){
        int last_digit = n/x;
        n -= last_digit*x;
        x/=16;
        if(last_digit<=9){
            ans=ans+to_string(last_digit);
        }
        else{
            char c = 'A'+last_digit-10;
            ans.push_back(c);
        }
        
    }
    return ans;
}
 
int main(){

    int n;
    cout<<"Enter a binary number: "<<endl;
    cin>>n;
    cout<<binarytoDecimal(n)<<endl;
    
    //OCTAL TO DECIMAL
    int p;
    cout<<"Enter octal number: "<<endl;
    cin>>p;
    cout<<"Octal to decimal: "<<octaltoDecimal(p)<<endl;

    //HEXADECIMAL TO DECIMAL
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"Hexadeciaml to decimal: "<<hexadecimaltodecimal(s)<<endl;

    //DECIMAL TO BINARY
    int a;
    cout<<"Enter a binary number: "<<endl;
    cin>>a;
    cout<<"Decimal to binary: "<<decimaltobinary(a)<<endl;

    //DECIMAL TO OCTAL
    int b;
    cout<<"Enter a number: "<<endl;
    cin>>b;
    cout<<"Decimal to octal: "<<decimaltooctal(b)<<endl;

    //DECIMAL TO HEXADECIAML
    int c;
    cout<<"Enter a Number: "<<endl;
    cin>>c;
    cout<<"Decimal to Hexaddecimal: "<<decimaltoHexadecimal(c)<<endl;
    return 0;
}