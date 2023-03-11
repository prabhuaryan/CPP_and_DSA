#include<iostream>
using namespace std;

int FindLargest(int arr[], int n){
    int largest=arr[0];
    for(int i=0; i<=n-1; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest element is : "<<largest;
}
int main(){
    int arr[]={9,18,2,6,15,450};
    int size=sizeof(arr)/sizeof(arr[0]);
    FindLargest(arr, size);
}