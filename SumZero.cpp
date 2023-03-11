#include<iostream>
using namespace std;
void SumZero(int arr[], int n){
    int i=0;
    int  j=n-1;
    for(i; i<=j; i++){
    for(int k=i+1; k<=j; k++){
        if(arr[i]+arr[k]==0){
            cout<<i<<","<<k;
        }
    }    
    }
}

int main(){
    int arr[]={10,10,20,-30,40,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    SumZero(arr,size);

    return 0;
}