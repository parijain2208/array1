#include <iostream>
using namespace std;
int main(){
    int n,ec=0,oc=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of array";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]%2==0){
            ec+=1;
        }else{
            oc+=1;
        }
    }
    cout<<"even count"<<ec<<endl;
    cout<<"odd count"<<oc;
}