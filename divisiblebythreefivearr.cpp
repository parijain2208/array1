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
        if (arr[i]%3==0 || arr[i]%5==0){
            cout<<arr[i]<<" ";
        }
    }
}