#include <iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter number to find";
    cin>>num;
    int i;
    for(i=0;i<n;i++){
        if (arr[i]==num){
            cout<<"element find at index"<<i;
            break;
        }
    }
    if (i==n){
        cout<<"not found";
    }
}