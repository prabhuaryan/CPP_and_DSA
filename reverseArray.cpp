#include<iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int s=0;
    int end=n-1;
    while(s<end){
    swap(arr[s],arr[end]);
        s++;
        end--;
    }
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    return 0;
}