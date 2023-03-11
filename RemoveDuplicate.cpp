// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                n--;
                for(int k=i; k<n; k++){
                    arr[k]=arr[k+1];
                }
            }
        }
    }
    
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
   
    
}
int main() {
    // Write C++ code here
    int arr[]={0,1,0,1,2,3,2,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    removeDuplicates(arr, size);
    

    return 0;
}