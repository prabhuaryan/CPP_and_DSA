#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
}

//2nd Approach

// void BubbleSort(int arr[], int n){
//     for(int i=n; i>0; i--){
//         for(int j=0; j<i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
            
//         }
//     }
//     for(int i=0; i<=n-1; i++){
//         cout<<arr[i]<<" ";
//     }
// }
int main(){
    int arr[]={8,5,6,8,4,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, size);
    return 0;
}