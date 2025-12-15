#include <iostream>
using namespace std;
int main(){
    int n,product=1;
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
     for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"product"<<product<<endl;
}