#include <iostream>
using namespace std;
int main(){
    int n,rev=n-1,start=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    bool palindrome=true;
    while(start<rev){
        if(arr[start]!=arr[rev]){
            palindrome=false;
            break;
        }
        start++;
        rev--;
    }
    if(palindrome){
        cout<<"array is palindrome";
    }else{
        cout<<"array is not palindrome";
    }
}