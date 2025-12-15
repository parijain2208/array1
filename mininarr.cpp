#include <iostream>
using namespace std;
int main(){
    int arr[]={1,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minvalue=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]<minvalue){
            minvalue=arr[i];
        }
    }
    cout<<"min value"<<minvalue;
}