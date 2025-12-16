#include <iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    cout<<"enter index key";
    cin>>key;
    for(int i=0;i<n;i++){
        if (i==key){
            cout<<arr[i];
        }
    }
}