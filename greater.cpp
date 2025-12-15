#include <iostream>
using namespace std;
int main(){
    int n,above=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]>100){
            above+=1;
        }
    }
    cout<<above;
}