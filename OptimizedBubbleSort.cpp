// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    int arr[6]={5,1,2,3,6,0};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n-1; i++){
        bool isSwap=false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(isSwap==false){
            break;
        }
    }
    
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}