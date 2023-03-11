#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int n){
    for(int i=0; i<=n; i=i+2){
        if(i+1<n)
            swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,1,6,4,9,12};
    int arr2[]={2,1,6,4,9,12,15};
    int size=sizeof(arr2)/sizeof(arr2[0]);
    SwapAlternate(arr2, size);
    printArray(arr2,size);
}