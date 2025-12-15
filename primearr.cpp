#include <iostream>
using namespace std;
int main(){
    int n,prime=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        int num=arr[i];
        int j;
        for (j=2;j<=num/2;j++){
            if (num%j==0){
                break;
            }
        }
        if (j>num/2){
            prime+=1;
        }
    }
    cout<<prime;
}