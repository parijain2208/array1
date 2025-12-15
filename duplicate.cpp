#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                cout<<"duplicate element";
                return 0;
            }
        }
    }
    cout<<"array doesn't have duplicate element";
    return 0;
}