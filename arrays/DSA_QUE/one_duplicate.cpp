##include <iostream>
using namespace std;

int findduplicate(int arr[],int n){
    
    //creating flag and freqarray
    //to count the occurence
    int freq[n]={0},flag=-1;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]>1)
        {
            flag = arr[i];
        }
    }
    return flag;
    
}

int main()
{
    int a[] = {1,3 ,4, 2, 2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"The duplicate ele: "<<findduplicate(a,n);
    return 0;
}
