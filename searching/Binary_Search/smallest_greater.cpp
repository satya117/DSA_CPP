/*https://leetcode.com/problems/find-smallest-letter-greater-than-target/*/
/*Should return the char greater than target and follow wrap aroung if target is at the end*/
#include<iostream>
using namespace std;

char Smallest_Greater(char a[],char target,int n){

    //start adn end
    int start = 0,end=n-1;

    //main condition
    while(start<=end){

        //find mid
        int mid = start+(end-start)/2;
        //less than or equal to
        if(a[mid]<=target)
            start = mid+1;
        else
            end = mid-1;
    }
    // wrap condition as start = end+1 = len(arr)
    //using remainder we return the beginning of arr if exceed
    return a[start%n];
}

int main(){

    char arr[] = {'c','f','g'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target = 'f';

    //return the char greater than the target
    cout<<Smallest_Greater(arr,target,size);
    return 0;

}