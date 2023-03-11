// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    int arr[6]={5,1,2,3,6,0};
    int n=sizeof(arr)/sizeof(int);
    int index=0;
    for(index;index<=n-1; index++){
      int min=index;
        for(int j=index+1; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
       swap(arr[index],arr[min]);
    }
    
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}