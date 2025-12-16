#include <iostream>
using namespace std;
void display(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void change(int arr[],int size){
    arr[1]=100;
}
int main(){
    int arr[]={2,6,9,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}